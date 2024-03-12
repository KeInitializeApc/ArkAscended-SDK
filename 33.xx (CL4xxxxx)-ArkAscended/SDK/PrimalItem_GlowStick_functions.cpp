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
// class UWorld*                      OptionalInitWorld                                                (BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_IncrementItemQuantity_ReturnValue                       (BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, SubobjectReference)
// float                              CallFunc_GetItemStatModifier_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

double UPrimalItem_GlowStick_C::BPPostInitializeItem(int32 CallFunc_IncrementItemQuantity_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_GlowStick_C", "BPPostInitializeItem");

	Params::UPrimalItem_GlowStick_C_BPPostInitializeItem_Params Parms{};

	Parms.CallFunc_IncrementItemQuantity_ReturnValue = CallFunc_IncrementItemQuantity_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItem_GlowStick.PrimalItem_GlowStick_C.BPItemBroken
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AWeapGlowStick_Base_C*       K2Node_DynamicCast_AsWeap_Glow_Stick_Base                        (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class AWeapGlowStick_Base_C*       K2Node_DynamicCast_AsWeap_Glow_Stick_Base_1                      (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// float                              CallFunc_GetItemStatModifier_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_IncrementItemQuantity_ReturnValue                       (BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UPrimalItem_GlowStick_C::BPItemBroken(bool* CallFunc_Greater_IntInt_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, int32 CallFunc_IncrementItemQuantity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_GlowStick_C", "BPItemBroken");

	Params::UPrimalItem_GlowStick_C_BPItemBroken_Params Parms{};

	Parms.CallFunc_IncrementItemQuantity_ReturnValue = CallFunc_IncrementItemQuantity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	return Parms.ReturnValue;

}

}


