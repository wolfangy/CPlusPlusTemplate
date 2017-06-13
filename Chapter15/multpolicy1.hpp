#pragma once

class MultPolicy {
public:
	template<typename TAccum, typename T>
	static void accumulate(TAccum& total, T const& value) {
		total *= value;
	}
};