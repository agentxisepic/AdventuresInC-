// Fill out your copyright notice in the Description page of Project Settings.

#include "Armor_Item.h"

AArmor_Item::AArmor_Item()
{
	this->Type = this->Type.FromString("Arm");
}

float AArmor_Item::GetProtection() const
{
	return Protection;
}