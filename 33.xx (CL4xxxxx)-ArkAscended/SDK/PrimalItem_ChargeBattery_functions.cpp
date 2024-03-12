#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C
// (None)

class UClass* UPrimalItem_ChargeBattery_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_ChargeBattery_C");

	return Clss;
}


// PrimalItem_ChargeBattery_C PrimalItem_ChargeBattery.Default__PrimalItem_ChargeBattery_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_ChargeBattery_C* UPrimalItem_ChargeBattery_C::GetDefaultObj()
{
	static class UPrimalItem_ChargeBattery_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_ChargeBattery_C*>(UPrimalItem_ChargeBattery_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPGetItemDurabilityPercentage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

double UPrimalItem_ChargeBattery_C::BPGetItemDurabilityPercentage(double CallFunc_FClamp_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_ChargeBattery_C", "BPGetItemDurabilityPercentage");

	Params::UPrimalItem_ChargeBattery_C_BPGetItemDurabilityPercentage_Params Parms{};

	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPGetItemIcon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerController*    ForPC                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// class UTexture2D*                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UTexture2D*                  FinalIcon                                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BPIsTemplate_ReturnValue                                (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UTexture2D*                  CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class UTexture2D*                  CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// class UTexture2D*                  CallFunc_Array_Get_Item_2                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// class UTexture2D*                  CallFunc_Array_Get_Item_3                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// class UTexture2D*                  CallFunc_Array_Get_Item_4                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_2                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

double UPrimalItem_ChargeBattery_C::BPGetItemIcon(class AShooterPlayerController** ForPC, class UTexture2D* CallFunc_Array_Get_Item, class UTexture2D* CallFunc_Array_Get_Item_1, class UTexture2D* CallFunc_Array_Get_Item_2, class UTexture2D* CallFunc_Array_Get_Item_3, class UTexture2D* CallFunc_Array_Get_Item_4, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_2, double CallFunc_Divide_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_ChargeBattery_C", "BPGetItemIcon");

	Params::UPrimalItem_ChargeBattery_C_BPGetItemIcon_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_2 = CallFunc_Less_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ForPC != nullptr)
		*ForPC = Parms.ForPC;

	return Parms.ReturnValue;

}


// Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPGetCustomInventoryWidgetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      ReturnString                                                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_FFloor_ReturnValue                                      (ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FFloor_A_ImplicitCast                                   (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)

double UPrimalItem_ChargeBattery_C::BPGetCustomInventoryWidgetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_ChargeBattery_C", "BPGetCustomInventoryWidgetText");

	Params::UPrimalItem_ChargeBattery_C_BPGetCustomInventoryWidgetText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.AddDurabilitySafe
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             AmountToAdd                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             AmountAdded                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// double                             FinalAmountAdded                                                 (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_FClamp_Max_ImplicitCast                                 (Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)

double UPrimalItem_ChargeBattery_C::AddDurabilitySafe(double* AmountAdded, double* CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double* CallFunc_Add_DoubleDouble_A_ImplicitCast, float* CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_ChargeBattery_C", "AddDurabilitySafe");

	Params::UPrimalItem_ChargeBattery_C_AddDurabilitySafe_Params Parms{};

	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AmountAdded != nullptr)
		*AmountAdded = Parms.AmountAdded;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (CallFunc_Add_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Add_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast;

	if (CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast != nullptr)
		*CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast = Parms.CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast;

	return Parms.ReturnValue;

}


// Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPUsedOntoItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              AdditionalData                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              InitialClipAmmo                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ChargeAdded                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UPrimalItemWeapon_StoresCharge_C*K2Node_DynamicCast_AsPrimal_Item_Weapon_Stores_Charge            (EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class UPrimalItem_ChargeBattery_C* K2Node_DynamicCast_AsPrimal_Item_Charge_Battery                  (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue_1                         (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_AddDurabilitySafe_amountAdded                           (ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// double                             CallFunc_AddDurabilitySafe_amountAdded_1                         (ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// class AShooterWeapon*              K2Node_DynamicCast_AsShooter_Weapon                              (ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_AddDurabilitySafe_amountAdded_2                         (ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_FFloor_ReturnValue                                      (ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Clamp_ReturnValue                                       (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_AddDurabilitySafe_amountToAdd_ImplicitCast              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_FFloor_A_ImplicitCast                                   (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)

double UPrimalItem_ChargeBattery_C::BPUsedOntoItem(bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Subtract_IntInt_ReturnValue, double* CallFunc_Multiply_IntFloat_ReturnValue, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_ChargeBattery_C", "BPUsedOntoItem");

	Params::UPrimalItem_ChargeBattery_C_BPUsedOntoItem_Params Parms{};

	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_Multiply_IntFloat_ReturnValue != nullptr)
		*CallFunc_Multiply_IntFloat_ReturnValue = Parms.CallFunc_Multiply_IntFloat_ReturnValue;

	if (CallFunc_GetClassDefaultObject_ReturnValue != nullptr)
		*CallFunc_GetClassDefaultObject_ReturnValue = Parms.CallFunc_GetClassDefaultObject_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	return Parms.ReturnValue;

}

}


