#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponMinigun.PrimalItem_WeaponMinigun_C
// (None)

class UClass* UPrimalItem_WeaponMinigun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponMinigun_C");

	return Clss;
}


// PrimalItem_WeaponMinigun_C PrimalItem_WeaponMinigun.Default__PrimalItem_WeaponMinigun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponMinigun_C* UPrimalItem_WeaponMinigun_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponMinigun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponMinigun_C*>(UPrimalItem_WeaponMinigun_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_WeaponMinigun.PrimalItem_WeaponMinigun_C.BPTributeItemDownloaded
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     ContextObject                                                    (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// TSoftClassPtr<class AShooterWeapon>WeapMinigunClass                                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsShooter_Weapon                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ObjectIsChildOf_ReturnValue                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class UObject*>             K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// TArray<class FName>                K2Node_MakeArray_Array_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<class UClass*>              K2Node_MakeArray_Array_2                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// TArray<class FString>              K2Node_MakeArray_Array_3                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, NonTransactional)
// TArray<float>                      K2Node_MakeArray_Array_4                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// struct FCustomItemData             K2Node_MakeStruct_CustomItemData                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, SubobjectReference)

bool UPrimalItem_WeaponMinigun_C::BPTributeItemDownloaded(TSoftClassPtr<class AShooterWeapon> WeapMinigunClass, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, bool CallFunc_ObjectIsChildOf_ReturnValue, TArray<class UObject*>* K2Node_MakeArray_Array, TArray<class FName>* K2Node_MakeArray_Array_1, TArray<class UClass*>* K2Node_MakeArray_Array_2, TArray<class FString>* K2Node_MakeArray_Array_3, TArray<float>* K2Node_MakeArray_Array_4, struct FCustomItemData* K2Node_MakeStruct_CustomItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponMinigun_C", "BPTributeItemDownloaded");

	Params::UPrimalItem_WeaponMinigun_C_BPTributeItemDownloaded_Params Parms{};

	Parms.WeapMinigunClass = WeapMinigunClass;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.CallFunc_ObjectIsChildOf_ReturnValue = CallFunc_ObjectIsChildOf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (K2Node_MakeArray_Array_1 != nullptr)
		*K2Node_MakeArray_Array_1 = std::move(Parms.K2Node_MakeArray_Array_1);

	if (K2Node_MakeArray_Array_2 != nullptr)
		*K2Node_MakeArray_Array_2 = std::move(Parms.K2Node_MakeArray_Array_2);

	if (K2Node_MakeArray_Array_3 != nullptr)
		*K2Node_MakeArray_Array_3 = std::move(Parms.K2Node_MakeArray_Array_3);

	if (K2Node_MakeArray_Array_4 != nullptr)
		*K2Node_MakeArray_Array_4 = std::move(Parms.K2Node_MakeArray_Array_4);

	if (K2Node_MakeStruct_CustomItemData != nullptr)
		*K2Node_MakeStruct_CustomItemData = std::move(Parms.K2Node_MakeStruct_CustomItemData);

	return Parms.ReturnValue;

}

}


