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
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<double>                     CustomFloats                                                     (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UObject*                     CallFunc_GetDefaultObject_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalItem*                 K2Node_DynamicCast_AsPrimal_Item                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FCustomItemData             K2Node_MakeStruct_CustomItemData                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<float>                      K2Node_MakeStruct_CustomDataFloats_ImplicitCast                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<double>                     K2Node_VariableSet_CustomFloats_ImplicitCast                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnInstance, SubobjectReference)

TArray<float> UPrimalItemResource_ElementShard_C::RefillElementShard(class UPrimalItem* DestinationItem, const TArray<double>& CustomFloats, TArray<double>* K2Node_VariableSet_CustomFloats_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_ElementShard_C", "RefillElementShard");

	Params::UPrimalItemResource_ElementShard_C_RefillElementShard_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.CustomFloats = CustomFloats;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_VariableSet_CustomFloats_ImplicitCast != nullptr)
		*K2Node_VariableSet_CustomFloats_ImplicitCast = std::move(Parms.K2Node_VariableSet_CustomFloats_ImplicitCast);

	return Parms.ReturnValue;

}


// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.CheckForElementShardData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               SupportsDragOnto                                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// bool                               ReturnVal                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

double UPrimalItemResource_ElementShard_C::CheckForElementShardData(class UPrimalItem* DestinationItem, bool* SupportsDragOnto, bool* ReturnVal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_ElementShard_C", "CheckForElementShardData");

	Params::UPrimalItemResource_ElementShard_C_CheckForElementShardData_Params Parms{};

	Parms.DestinationItem = DestinationItem;

	UObject::ProcessEvent(Func, &Parms);

	if (SupportsDragOnto != nullptr)
		*SupportsDragOnto = Parms.SupportsDragOnto;

	if (ReturnVal != nullptr)
		*ReturnVal = Parms.ReturnVal;

	return Parms.ReturnValue;

}


// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.BPSupportUseOntoItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_CheckForElementShardData_SupportsDragOnto               (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)

void UPrimalItemResource_ElementShard_C::BPSupportUseOntoItem(class UPrimalItem* DestinationItem, bool ReturnValue, bool* CallFunc_CheckForElementShardData_SupportsDragOnto)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_ElementShard_C", "BPSupportUseOntoItem");

	Params::UPrimalItemResource_ElementShard_C_BPSupportUseOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_CheckForElementShardData_SupportsDragOnto != nullptr)
		*CallFunc_CheckForElementShardData_SupportsDragOnto = Parms.CallFunc_CheckForElementShardData_SupportsDragOnto;

}


// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.BPUsedOntoItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              AdditionalData                                                   (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)

void UPrimalItemResource_ElementShard_C::BPUsedOntoItem(class UPrimalItem* DestinationItem, int32* AdditionalData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_ElementShard_C", "BPUsedOntoItem");

	Params::UPrimalItemResource_ElementShard_C_BPUsedOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;

	UObject::ProcessEvent(Func, &Parms);

	if (AdditionalData != nullptr)
		*AdditionalData = Parms.AdditionalData;

}

}


