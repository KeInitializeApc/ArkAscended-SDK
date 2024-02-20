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
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               SupportsDragOn                                                   (BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue_Loc                                                  (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

double UPrimalItemResource_Gasoline_C::CheckForGasolineData(class UPrimalItem* DestinationItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Gasoline_C", "CheckForGasolineData");

	Params::UPrimalItemResource_Gasoline_C_CheckForGasolineData_Params Parms{};

	Parms.DestinationItem = DestinationItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.RefillGasoline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<double>                     CustomFloats_Loc                                                 (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UObject*                     CallFunc_GetDefaultObject_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalItem*                 K2Node_DynamicCast_AsPrimal_Item                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_IncrementItemQuantity_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FCustomItemData             K2Node_MakeStruct_CustomItemData                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<double>                     K2Node_VariableSet_CustomFloats_Loc_ImplicitCast                 (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<float>                      K2Node_MakeStruct_CustomDataFloats_ImplicitCast                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

TArray<float> UPrimalItemResource_Gasoline_C::RefillGasoline(class UPrimalItem* DestinationItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Gasoline_C", "RefillGasoline");

	Params::UPrimalItemResource_Gasoline_C_RefillGasoline_Params Parms{};

	Parms.DestinationItem = DestinationItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.BPUsedOntoItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              AdditionalData                                                   (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)

void UPrimalItemResource_Gasoline_C::BPUsedOntoItem(class UPrimalItem* DestinationItem, int32* AdditionalData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Gasoline_C", "BPUsedOntoItem");

	Params::UPrimalItemResource_Gasoline_C_BPUsedOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;

	UObject::ProcessEvent(Func, &Parms);

	if (AdditionalData != nullptr)
		*AdditionalData = Parms.AdditionalData;

}


// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.BPSupportUseOntoItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_CheckForGasolineData_SupportsDragOn                     (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UPrimalItemResource_Gasoline_C::BPSupportUseOntoItem(class UPrimalItem* DestinationItem, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Gasoline_C", "BPSupportUseOntoItem");

	Params::UPrimalItemResource_Gasoline_C_BPSupportUseOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


