#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_GlowStick.PrimalItem_GlowStick_C
// (None)

class UClass* UPrimalItem_GlowStick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_GlowStick_C");

	return Clss;
}


// PrimalItem_GlowStick_C PrimalItem_GlowStick.Default__PrimalItem_GlowStick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_GlowStick_C* UPrimalItem_GlowStick_C::GetDefaultObj()
{
	static class UPrimalItem_GlowStick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_GlowStick_C*>(UPrimalItem_GlowStick_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_GlowStick.PrimalItem_GlowStick_C.BPPostInitializeItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWorld*                      OptionalInitWorld                                                (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_IncrementItemQuantity_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_GetItemStatModifier_ReturnValue                         (ExportObject, Net, Parm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, SubobjectReference)

double UPrimalItem_GlowStick_C::BPPostInitializeItem(class UWorld* OptionalInitWorld, float CallFunc_GetItemStatModifier_ReturnValue, double CallFunc_Less_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_GlowStick_C", "BPPostInitializeItem");

	Params::UPrimalItem_GlowStick_C_BPPostInitializeItem_Params Parms{};

	Parms.OptionalInitWorld = OptionalInitWorld;
	Parms.CallFunc_GetItemStatModifier_ReturnValue = CallFunc_GetItemStatModifier_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_B_ImplicitCast = CallFunc_Less_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItem_GlowStick.PrimalItem_GlowStick_C.BPItemBroken
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AWeapGlowStick_Base_C*       K2Node_DynamicCast_AsWeap_Glow_Stick_Base                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AWeapGlowStick_Base_C*       K2Node_DynamicCast_AsWeap_Glow_Stick_Base_1                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_GetItemStatModifier_ReturnValue                         (ExportObject, Net, Parm, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_IncrementItemQuantity_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference)

int32 UPrimalItem_GlowStick_C::BPItemBroken(bool* CallFunc_IsValid_ReturnValue, class AWeapGlowStick_Base_C* K2Node_DynamicCast_AsWeap_Glow_Stick_Base, class AWeapGlowStick_Base_C* K2Node_DynamicCast_AsWeap_Glow_Stick_Base_1, float CallFunc_GetItemStatModifier_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_GlowStick_C", "BPItemBroken");

	Params::UPrimalItem_GlowStick_C_BPItemBroken_Params Parms{};

	Parms.K2Node_DynamicCast_AsWeap_Glow_Stick_Base = K2Node_DynamicCast_AsWeap_Glow_Stick_Base;
	Parms.K2Node_DynamicCast_AsWeap_Glow_Stick_Base_1 = K2Node_DynamicCast_AsWeap_Glow_Stick_Base_1;
	Parms.CallFunc_GetItemStatModifier_ReturnValue = CallFunc_GetItemStatModifier_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}

}


