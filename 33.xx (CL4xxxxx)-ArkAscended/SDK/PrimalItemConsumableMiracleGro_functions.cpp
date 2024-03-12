#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumableMiracleGro.PrimalItemConsumableMiracleGro_C
// (None)

class UClass* UPrimalItemConsumableMiracleGro_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumableMiracleGro_C");

	return Clss;
}


// PrimalItemConsumableMiracleGro_C PrimalItemConsumableMiracleGro.Default__PrimalItemConsumableMiracleGro_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumableMiracleGro_C* UPrimalItemConsumableMiracleGro_C::GetDefaultObj()
{
	static class UPrimalItemConsumableMiracleGro_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumableMiracleGro_C*>(UPrimalItemConsumableMiracleGro_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemConsumableMiracleGro.PrimalItemConsumableMiracleGro_C.BlueprintUsed
// (Event, Public, BlueprintEvent)
// Parameters:

void UPrimalItemConsumableMiracleGro_C::BlueprintUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemConsumableMiracleGro_C", "BlueprintUsed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItemConsumableMiracleGro.PrimalItemConsumableMiracleGro_C.ExecuteUbergraph_PrimalItemConsumableMiracleGro
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// float                              CallFunc_ForceRepopulateFoliageAtPoint_MaxRangeFromPoint_ImplicitCast(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

float UPrimalItemConsumableMiracleGro_C::ExecuteUbergraph_PrimalItemConsumableMiracleGro(int32* EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemConsumableMiracleGro_C", "ExecuteUbergraph_PrimalItemConsumableMiracleGro");

	Params::UPrimalItemConsumableMiracleGro_C_ExecuteUbergraph_PrimalItemConsumableMiracleGro_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Game_Mode = K2Node_DynamicCast_AsShooter_Game_Mode;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}

}


