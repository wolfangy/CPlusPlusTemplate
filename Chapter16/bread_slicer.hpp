#pragma once
#include "default_policies.h"
#include "policy_selector.h"

template <typename PolicySetter1 = DefaultPolicyArgs,
	typename PolicySetter2 = DefaultPolicyArgs,
	typename PolicySetter3 = DefaultPolicyArgs,
	typename PolicySetter4 = DefaultPolicyArgs>
	class BreadSlicer
{
	typedef PolicySelector<PolicySetter1, PolicySetter2, PolicySetter3, PolicySetter4> Policies;

public:
	void doListening()
	{
		Policies::P1::listen();
	}

	void doSpeaking()
	{
		Policies::P2::speak();
	}

	void doReading()
	{
		Policies::P3::read();
	}

	void doWriting()
	{
		Policies::P4::write();
	}
};