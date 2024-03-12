#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CactusHarvestComponent.CactusHarvestComponent_C
// (None)

class UClass* UCactusHarvestComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CactusHarvestComponent_C");

	return Clss;
}


// CactusHarvestComponent_C CactusHarvestComponent.Default__CactusHarvestComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCactusHarvestComponent_C* UCactusHarvestComponent_C::GetDefaultObj()
{
	static class UCactusHarvestComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCactusHarvestComponent_C*>(UCactusHarvestComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CactusHarvestComponent.CactusHarvestComponent_C.BPCustomHarvestResource
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalInventoryComponent*   InvComp                                                          (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              NumToGive                                                        (Edit, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      DamageTypeClass                                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, SubobjectReference)
// class AActor*                      ToActor                                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class ACamelsaurus_Character_Base_BP_C*K2Node_DynamicCast_AsCamelsaurus_Character_Base_BP               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// double                             CallFunc_AddWater_NewWaterAmount                                 (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UPrimalCharacterStatusComponent*CallFunc_GetCharacterStatusComponent_ReturnValue                 (Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_AddStatusValueModifier_Speed_ImplicitCast               (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_AddStatusValueModifier_Amount_ImplicitCast              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

float UCactusHarvestComponent_C::BPCustomHarvestResource(class UClass** DamageTypeClass, class AActor* ToActor, bool* K2Node_DynamicCast_bSuccess, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CactusHarvestComponent_C", "BPCustomHarvestResource");

	Params::UCactusHarvestComponent_C_BPCustomHarvestResource_Params Parms{};

	Parms.ToActor = ToActor;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageTypeClass != nullptr)
		*DamageTypeClass = Parms.DamageTypeClass;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	return Parms.ReturnValue;

}

}


