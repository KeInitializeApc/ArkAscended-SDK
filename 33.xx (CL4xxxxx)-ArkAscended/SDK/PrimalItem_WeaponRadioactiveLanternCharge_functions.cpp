#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponRadioactiveLanternCharge.PrimalItem_WeaponRadioactiveLanternCharge_C
// (None)

class UClass* UPrimalItem_WeaponRadioactiveLanternCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponRadioactiveLanternCharge_C");

	return Clss;
}


// PrimalItem_WeaponRadioactiveLanternCharge_C PrimalItem_WeaponRadioactiveLanternCharge.Default__PrimalItem_WeaponRadioactiveLanternCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponRadioactiveLanternCharge_C* UPrimalItem_WeaponRadioactiveLanternCharge_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponRadioactiveLanternCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponRadioactiveLanternCharge_C*>(UPrimalItem_WeaponRadioactiveLanternCharge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_WeaponRadioactiveLanternCharge.PrimalItem_WeaponRadioactiveLanternCharge_C.BPGetCustomInventoryWidgetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             TotalChargeInBatteries                                           (Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              NumNonEmptyBatteries                                             (OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      FinalString                                                      (Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_FFloor_ReturnValue                                      (ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Min_ReturnValue                                         (ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UPrimalItem_ChargeBattery_C* K2Node_DynamicCast_AsPrimal_Item_Charge_Battery                  (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)

class FString UPrimalItem_WeaponRadioactiveLanternCharge_C::BPGetCustomInventoryWidgetText(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Min_ReturnValue, class UPrimalItem* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess, double* CallFunc_Add_DoubleDouble_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, double* CallFunc_Add_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponRadioactiveLanternCharge_C", "BPGetCustomInventoryWidgetText");

	Params::UPrimalItem_WeaponRadioactiveLanternCharge_C_BPGetCustomInventoryWidgetText_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (CallFunc_Add_DoubleDouble_B_ImplicitCast != nullptr)
		*CallFunc_Add_DoubleDouble_B_ImplicitCast = Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast;

	return Parms.ReturnValue;

}

}


