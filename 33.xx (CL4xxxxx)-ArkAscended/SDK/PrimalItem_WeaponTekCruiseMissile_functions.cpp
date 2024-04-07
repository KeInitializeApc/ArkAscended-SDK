#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C
// (None)

class UClass* UPrimalItem_WeaponTekCruiseMissile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponTekCruiseMissile_C");

	return Clss;
}


// PrimalItem_WeaponTekCruiseMissile_C PrimalItem_WeaponTekCruiseMissile.Default__PrimalItem_WeaponTekCruiseMissile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponTekCruiseMissile_C* UPrimalItem_WeaponTekCruiseMissile_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponTekCruiseMissile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponTekCruiseMissile_C*>(UPrimalItem_WeaponTekCruiseMissile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.BPProcessEditText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerController*    ForPC                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// class FString                      TextToUse                                                        (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetPlayerCharacter_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (ConstParm, BlueprintVisible, Net, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

class AShooterCharacter* UPrimalItem_WeaponTekCruiseMissile_C::BPProcessEditText(class AShooterPlayerController** ForPC, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTekCruiseMissile_C", "BPProcessEditText");

	Params::UPrimalItem_WeaponTekCruiseMissile_C_BPProcessEditText_Params Parms{};

	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Test = K2Node_DynamicCast_AsPlayer_Pawn_Test;

	UObject::ProcessEvent(Func, &Parms);

	if (ForPC != nullptr)
		*ForPC = Parms.ForPC;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.Set Scout Character Status Values
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<double>                     Stats                                                            (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

TArray<double> UPrimalItem_WeaponTekCruiseMissile_C::Set_Scout_Character_Status_Values()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTekCruiseMissile_C", "Set Scout Character Status Values");

	Params::UPrimalItem_WeaponTekCruiseMissile_C_Set_Scout_Character_Status_Values_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.Missile Released Possessing Survivor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Delay_for_zoom_out                                               (ConstParm, BlueprintVisible, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AWeapTekCruiseMissile_Base_C*K2Node_DynamicCast_AsWeap_Tek_Cruise_Missile_Base                (BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

void UPrimalItem_WeaponTekCruiseMissile_C::Missile_Released_Possessing_Survivor(bool Delay_for_zoom_out, class AWeapTekCruiseMissile_Base_C* K2Node_DynamicCast_AsWeap_Tek_Cruise_Missile_Base, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTekCruiseMissile_C", "Missile Released Possessing Survivor");

	Params::UPrimalItem_WeaponTekCruiseMissile_C_Missile_Released_Possessing_Survivor_Params Parms{};

	Parms.Delay_for_zoom_out = Delay_for_zoom_out;
	Parms.K2Node_DynamicCast_AsWeap_Tek_Cruise_Missile_Base = K2Node_DynamicCast_AsWeap_Tek_Cruise_Missile_Base;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

}


// Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.Missile Possessed by Survivor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPrimalItem_WeaponTekCruiseMissile_C::Missile_Possessed_by_Survivor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTekCruiseMissile_C", "Missile Possessed by Survivor");



	UObject::ProcessEvent(Func, nullptr);

}

}


