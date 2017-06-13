#pragma once
template<typename Base, int D>
class Discriminator : public Base {
};

template <typename Setter1, typename Setter2, typename Setter3, typename Setter4>
class PolicySelector : public Discriminator<Setter1, 1>,
	public Discriminator<Setter2, 2>,
	public Discriminator<Setter3, 3>,
	public Discriminator<Setter4, 4>
{

};