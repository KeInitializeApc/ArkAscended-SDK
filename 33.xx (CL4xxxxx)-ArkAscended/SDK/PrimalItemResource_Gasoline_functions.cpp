#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C
// (None)

class UClass* UPrimalItemResource_Gasoline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Gasoline_C");

	return Clss;
}


// PrimalItemResource_Gasoline_C PrimalItemResource_Gasoline.Default__PrimalItemResource_Gasoline_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Gasoline_C* UPrimalItemResource_Gasoline_C::GetDefaultObj()
{
	static class UPrimalItemResource_Gasoline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Gasoline_C*>(UPrimalItemResource_Gasoline_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.CheckForGasolineData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               SupportsDragOn                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               ReturnValue_Loc                                                  (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UPrimalItemResource_Gasoline_C::CheckForGasolineData(class UPrimalItem* DestinationItem, struct FCustomItemData* CallFunc_GetCustomItemData_OutData, bool* CallFunc_GetCustomItemData_ReturnValue, float* CallFunc_Array_Get_Item, double* CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Gasoline_C", "CheckForGasolineData");

	Params::UPrimalItemResource_Gasoline_C_CheckForGasolineData_Params Parms{};

	Parms.DestinationItem = DestinationItem;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetCustomItemData_OutData != nullptr)
		*CallFunc_GetCustomItemData_OutData = std::move(Parms.CallFunc_GetCustomItemData_OutData);

	if (CallFunc_GetCustomItemData_ReturnValue != nullptr)
		*CallFunc_GetCustomItemData_ReturnValue = Parms.CallFunc_GetCustomItemData_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Less_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Less_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast;

	return Parms.ReturnValue;

}


// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.RefillGasoline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<double>                     CustomFloats_Loc                                                 (BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (Edit, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UObject*                     CallFunc_GetDefaultObject_ReturnValue                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalItem*                 K2Node_DynamicCast_AsPrimal_Item                                 (ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_IncrementItemQuantity_ReturnValue                       (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FCustomItemData             K2Node_MakeStruct_CustomItemData                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<double>                     K2Node_VariableSet_CustomFloats_Loc_ImplicitCast                 (Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<float>                      K2Node_MakeStruct_CustomDataFloats_ImplicitCast                  (Edit, ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

TArray<float> UPrimalItemResource_Gasoline_C::RefillGasoline(class UPrimalItem* DestinationItem, class UObject** CallFunc_GetDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess, struct FCustomItemData* CallFunc_GetCustomItemData_OutData, bool* CallFunc_GetCustomItemData_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32* CallFunc_IncrementItemQuantity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Gasoline_C", "RefillGasoline");

	Params::UPrimalItemResource_Gasoline_C_RefillGasoline_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetDefaultObject_ReturnValue != nullptr)
		*CallFunc_GetDefaultObject_ReturnValue = Parms.CallFunc_GetDefaultObject_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetCustomItemData_OutData != nullptr)
		*CallFunc_GetCustomItemData_OutData = std::move(Parms.CallFunc_GetCustomItemData_OutData);

	if (CallFunc_GetCustomItemData_ReturnValue != nullptr)
		*CallFunc_GetCustomItemData_ReturnValue = Parms.CallFunc_GetCustomItemData_ReturnValue;

	if (CallFunc_IncrementItemQuantity_ReturnValue != nullptr)
		*CallFunc_IncrementItemQuantity_ReturnValue = Parms.CallFunc_IncrementItemQuantity_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.BPUsedOntoItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              AdditionalData                                                   (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UPrimalItemResource_Gasoline_C::BPUsedOntoItem(class UPrimalItem* DestinationItem, int32 AdditionalData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Gasoline_C", "BPUsedOntoItem");

	Params::UPrimalItemResource_Gasoline_C_BPUsedOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.AdditionalData = AdditionalData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.BPSupportUseOntoItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_CheckForGasolineData_SupportsDragOn                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UPrimalItemResource_Gasoline_C::BPSupportUseOntoItem(class UPrimalItem* DestinationItem, bool* CallFunc_CheckForGasolineData_SupportsDragOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Gasoline_C", "BPSupportUseOntoItem");

	Params::UPrimalItemResource_Gasoline_C_BPSupportUseOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_CheckForGasolineData_SupportsDragOn != nullptr)
		*CallFunc_CheckForGasolineData_SupportsDragOn = Parms.CallFunc_CheckForGasolineData_SupportsDragOn;

	return Parms.ReturnValue;

}

}


