// See the file "COPYING" in the main distribution directory for copyright.

#include "zeek/analyzer/protocol/dcom/dcom.h"

#include "zeek/zeek-config.h"

#include <cstdlib>
#include <map>
#include <string>

using namespace std;

namespace zeek::analyzer::dcom
	{

dcom_Analyzer::dcom_Analyzer(Connection* conn)
	: analyzer::tcp::TCP_ApplicationAnalyzer("dcom", conn)
	{
	had_gap = false;
	interp = new binpac::dcom::dcom_Conn(this);
	}

dcom_Analyzer::~dcom_Analyzer()
	{
	delete interp;
	}

void dcom_Analyzer::Done()
	{
	TCP_ApplicationAnalyzer::Done();

	interp->FlowEOF(true);
	interp->FlowEOF(false);
	}

void dcom_Analyzer::EndpointEOF(bool is_orig)
	{
	TCP_ApplicationAnalyzer::EndpointEOF(is_orig);
	interp->FlowEOF(is_orig);
	}

void dcom_Analyzer::Undelivered(uint64_t seq, int len, bool orig)
	{
	TCP_ApplicationAnalyzer::Undelivered(seq, len, orig);
	had_gap = true;
	interp->NewGap(orig, len);
	}

void dcom_Analyzer::DeliverStream(int len, const u_char* data, bool orig)
	{
	TCP_ApplicationAnalyzer::DeliverStream(len, data, orig);

	cout << "Data here" << endl;

	try
		{
		interp->NewData(orig, data, data + len);
		}
	catch ( const binpac::Exception& e )
		{
		AnalyzerViolation(util::fmt("Binpac exception: %s", e.c_msg()));
		}
	}

	} // namespace zeek::analyzer::dcom
