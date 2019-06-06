// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapon_Item.h"

AWeapon_Item::AWeapon_Item()
{
	this->Type = this->Type.FromString("Wpn");
}

float AWeapon_Item::GetDamage() const
{
	return Damage;
}