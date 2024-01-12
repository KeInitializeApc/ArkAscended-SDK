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
// class UWorld*                      OptionalInitWorld                                                (Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_IncrementItemQuantity_ReturnValue                       (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_GetItemStatModifier_ReturnValue                         (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

double UPrimalItem_GlowStick_C::BPPostInitializeItem(class UWorld* OptionalInitWorld, int32* CallFunc_IncrementItemQuantity_ReturnValue, double* CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_GlowStick_C", "BPPostInitializeItem");

	Params::UPrimalItem_GlowStick_C_BPPostInitializeItem_Params Parms{};

	Parms.OptionalInitWorld = OptionalInitWorld;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IncrementItemQuantity_ReturnValue != nullptr)
		*CallFunc_IncrementItemQuantity_ReturnValue = Parms.CallFunc_IncrementItemQuantity_ReturnValue;

	if (CallFunc_Less_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Less_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast;

	return Parms.ReturnValue;

}


// Function PrimalItem_GlowStick.PrimalItem_GlowStick_C.BPItemBroken
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AWeapGlowStick_Base_C*       K2Node_DynamicCast_AsWeap_Glow_Stick_Base                        (ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AWeapGlowStick_Base_C*       K2Node_DynamicCast_AsWeap_Glow_Stick_Base_1                      (ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_GetItemStatModifier_ReturnValue                         (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_IncrementItemQuantity_ReturnValue                       (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UPrimalItem_GlowStick_C::BPItemBroken(bool* CallFunc_IsValid_ReturnValue, class AWeapGlowStick_Base_C* K2Node_DynamicCast_AsWeap_Glow_Stick_Base, bool* K2Node_DynamicCast_bSuccess, class AWeapGlowStick_Base_C* K2Node_DynamicCast_AsWeap_Glow_Stick_Base_1, bool* K2Node_DynamicCast_bSuccess_1, int32* CallFunc_IncrementItemQuantity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_GlowStick_C", "BPItemBroken");

	Params::UPrimalItem_GlowStick_C_BPItemBroken_Params Parms{};

	Parms.K2Node_DynamicCast_AsWeap_Glow_Stick_Base = K2Node_DynamicCast_AsWeap_Glow_Stick_Base;
	Parms.K2Node_DynamicCast_AsWeap_Glow_Stick_Base_1 = K2Node_DynamicCast_AsWeap_Glow_Stick_Base_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_IncrementItemQuantity_ReturnValue != nullptr)
		*CallFunc_IncrementItemQuantity_ReturnValue = Parms.CallFunc_IncrementItemQuantity_ReturnValue;

	return Parms.ReturnValue;

}

}


