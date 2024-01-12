#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C
// (None)

class UClass* UPrimalItemResource_ElementShard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_ElementShard_C");

	return Clss;
}


// PrimalItemResource_ElementShard_C PrimalItemResource_ElementShard.Default__PrimalItemResource_ElementShard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_ElementShard_C* UPrimalItemResource_ElementShard_C::GetDefaultObj()
{
	static class UPrimalItemResource_ElementShard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_ElementShard_C*>(UPrimalItemResource_ElementShard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.RefillElementShard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<double>                     CustomFloats                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UObject*                     CallFunc_GetDefaultObject_ReturnValue                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalItem*                 K2Node_DynamicCast_AsPrimal_Item                                 (ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FCustomItemData             K2Node_MakeStruct_CustomItemData                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (Edit, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<float>                      K2Node_MakeStruct_CustomDataFloats_ImplicitCast                  (Edit, ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<double>                     K2Node_VariableSet_CustomFloats_ImplicitCast                     (ExportObject, Net, Parm, OutParm, Transient, Config, EditConst, SubobjectReference)

TArray<float> UPrimalItemResource_ElementShard_C::RefillElementShard(class UPrimalItem* DestinationItem, TArray<double>* CustomFloats, class UObject** CallFunc_GetDefaultObject_ReturnValue, struct FCustomItemData* CallFunc_GetCustomItemData_OutData, bool* CallFunc_GetCustomItemData_ReturnValue, bool* K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<double>* K2Node_VariableSet_CustomFloats_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_ElementShard_C", "RefillElementShard");

	Params::UPrimalItemResource_ElementShard_C_RefillElementShard_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CustomFloats != nullptr)
		*CustomFloats = std::move(Parms.CustomFloats);

	if (CallFunc_GetDefaultObject_ReturnValue != nullptr)
		*CallFunc_GetDefaultObject_ReturnValue = Parms.CallFunc_GetDefaultObject_ReturnValue;

	if (CallFunc_GetCustomItemData_OutData != nullptr)
		*CallFunc_GetCustomItemData_OutData = std::move(Parms.CallFunc_GetCustomItemData_OutData);

	if (CallFunc_GetCustomItemData_ReturnValue != nullptr)
		*CallFunc_GetCustomItemData_ReturnValue = Parms.CallFunc_GetCustomItemData_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_VariableSet_CustomFloats_ImplicitCast != nullptr)
		*K2Node_VariableSet_CustomFloats_ImplicitCast = std::move(Parms.K2Node_VariableSet_CustomFloats_ImplicitCast);

	return Parms.ReturnValue;

}


// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.CheckForElementShardData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               SupportsDragOnto                                                 (Edit, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, SubobjectReference)
// bool                               ReturnVal                                                        (EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UPrimalItemResource_ElementShard_C::CheckForElementShardData(class UPrimalItem* DestinationItem, bool* SupportsDragOnto, bool* ReturnVal, struct FCustomItemData* CallFunc_GetCustomItemData_OutData, bool* CallFunc_GetCustomItemData_ReturnValue, float* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double* CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_ElementShard_C", "CheckForElementShardData");

	Params::UPrimalItemResource_ElementShard_C_CheckForElementShardData_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SupportsDragOnto != nullptr)
		*SupportsDragOnto = Parms.SupportsDragOnto;

	if (ReturnVal != nullptr)
		*ReturnVal = Parms.ReturnVal;

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


// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.BPSupportUseOntoItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_CheckForElementShardData_SupportsDragOnto               (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)

bool UPrimalItemResource_ElementShard_C::BPSupportUseOntoItem(class UPrimalItem* DestinationItem, bool* CallFunc_CheckForElementShardData_SupportsDragOnto)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_ElementShard_C", "BPSupportUseOntoItem");

	Params::UPrimalItemResource_ElementShard_C_BPSupportUseOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_CheckForElementShardData_SupportsDragOnto != nullptr)
		*CallFunc_CheckForElementShardData_SupportsDragOnto = Parms.CallFunc_CheckForElementShardData_SupportsDragOnto;

	return Parms.ReturnValue;

}


// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.BPUsedOntoItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              AdditionalData                                                   (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UPrimalItemResource_ElementShard_C::BPUsedOntoItem(class UPrimalItem* DestinationItem, int32 AdditionalData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_ElementShard_C", "BPUsedOntoItem");

	Params::UPrimalItemResource_ElementShard_C_BPUsedOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.AdditionalData = AdditionalData;

	UObject::ProcessEvent(Func, &Parms);

}

}


