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
// class UPrimalItem*                 DestinationItem                                                  (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<double>                     CustomFloats                                                     (BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UObject*                     CallFunc_GetDefaultObject_ReturnValue                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (ExportObject, Parm, ZeroConstructor, Transient, SubobjectReference)
// class UPrimalItem*                 K2Node_DynamicCast_AsPrimal_Item                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// struct FCustomItemData             K2Node_MakeStruct_CustomItemData                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// TArray<float>                      K2Node_MakeStruct_CustomDataFloats_ImplicitCast                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// TArray<double>                     K2Node_VariableSet_CustomFloats_ImplicitCast                     (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)

bool UPrimalItemResource_ElementShard_C::RefillElementShard(class UObject* CallFunc_GetDefaultObject_ReturnValue, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, class UPrimalItem** K2Node_DynamicCast_AsPrimal_Item, bool* K2Node_DynamicCast_bSuccess, struct FCustomItemData* K2Node_MakeStruct_CustomItemData, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool* CallFunc_Array_IsValidIndex_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue, TArray<float>* K2Node_MakeStruct_CustomDataFloats_ImplicitCast, TArray<double>* K2Node_VariableSet_CustomFloats_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_ElementShard_C", "RefillElementShard");

	Params::UPrimalItemResource_ElementShard_C_RefillElementShard_Params Parms{};

	Parms.CallFunc_GetDefaultObject_ReturnValue = CallFunc_GetDefaultObject_ReturnValue;
	Parms.CallFunc_GetCustomItemData_OutData = CallFunc_GetCustomItemData_OutData;
	Parms.CallFunc_GetCustomItemData_ReturnValue = CallFunc_GetCustomItemData_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue = CallFunc_MakeLiteralDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Item != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item = Parms.K2Node_DynamicCast_AsPrimal_Item;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_MakeStruct_CustomItemData != nullptr)
		*K2Node_MakeStruct_CustomItemData = std::move(Parms.K2Node_MakeStruct_CustomItemData);

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	if (K2Node_MakeStruct_CustomDataFloats_ImplicitCast != nullptr)
		*K2Node_MakeStruct_CustomDataFloats_ImplicitCast = std::move(Parms.K2Node_MakeStruct_CustomDataFloats_ImplicitCast);

	if (K2Node_VariableSet_CustomFloats_ImplicitCast != nullptr)
		*K2Node_VariableSet_CustomFloats_ImplicitCast = std::move(Parms.K2Node_VariableSet_CustomFloats_ImplicitCast);

	return Parms.ReturnValue;

}


// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.CheckForElementShardData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               SupportsDragOnto                                                 (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               ReturnVal                                                        (Edit, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (ExportObject, Parm, ZeroConstructor, Transient, SubobjectReference)
// float                              CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)

bool UPrimalItemResource_ElementShard_C::CheckForElementShardData(bool* SupportsDragOnto, bool* ReturnVal, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, float CallFunc_Array_Get_Item, bool* CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_ElementShard_C", "CheckForElementShardData");

	Params::UPrimalItemResource_ElementShard_C_CheckForElementShardData_Params Parms{};

	Parms.CallFunc_GetCustomItemData_OutData = CallFunc_GetCustomItemData_OutData;
	Parms.CallFunc_GetCustomItemData_ReturnValue = CallFunc_GetCustomItemData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (SupportsDragOnto != nullptr)
		*SupportsDragOnto = Parms.SupportsDragOnto;

	if (ReturnVal != nullptr)
		*ReturnVal = Parms.ReturnVal;

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.BPSupportUseOntoItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_CheckForElementShardData_SupportsDragOnto               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, EditConst, SubobjectReference)

bool UPrimalItemResource_ElementShard_C::BPSupportUseOntoItem(bool* CallFunc_CheckForElementShardData_SupportsDragOnto)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_ElementShard_C", "BPSupportUseOntoItem");

	Params::UPrimalItemResource_ElementShard_C_BPSupportUseOntoItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_CheckForElementShardData_SupportsDragOnto != nullptr)
		*CallFunc_CheckForElementShardData_SupportsDragOnto = Parms.CallFunc_CheckForElementShardData_SupportsDragOnto;

	return Parms.ReturnValue;

}


// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.BPUsedOntoItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              AdditionalData                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

int32 UPrimalItemResource_ElementShard_C::BPUsedOntoItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_ElementShard_C", "BPUsedOntoItem");

	Params::UPrimalItemResource_ElementShard_C_BPUsedOntoItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


