#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponElectronicBinoculars.PrimalItem_WeaponElectronicBinoculars_C
// (None)

class UClass* UPrimalItem_WeaponElectronicBinoculars_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponElectronicBinoculars_C");

	return Clss;
}


// PrimalItem_WeaponElectronicBinoculars_C PrimalItem_WeaponElectronicBinoculars.Default__PrimalItem_WeaponElectronicBinoculars_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponElectronicBinoculars_C* UPrimalItem_WeaponElectronicBinoculars_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponElectronicBinoculars_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponElectronicBinoculars_C*>(UPrimalItem_WeaponElectronicBinoculars_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_WeaponElectronicBinoculars.PrimalItem_WeaponElectronicBinoculars_C.BPGetItemDescription
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InDescription                                                    (Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bGetLongDescription                                              (Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    ForPC                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class FString                      CallFunc_FormatTextureAsRichText_ReturnValue                     (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue_1                         (BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_2                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue_2                         (BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue_1                         (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue_2                         (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_FormatTextureAsRichText_ReturnValue_1                   (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_FormatTextureAsRichText_ReturnValue_2                   (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_3                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue_3                         (BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue_3                         (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_FormatTextureAsRichText_ReturnValue_3                   (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class FText                        CallFunc_GetKeybindDisplayName_ReturnValue                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_GetKeybindDisplayName_ReturnValue_1                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// class FText                        CallFunc_Format_ReturnValue                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_GetKeybindDisplayName_ReturnValue_2                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FText                        CallFunc_GetKeybindDisplayName_ReturnValue_3                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_Format_ReturnValue_1                                    (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)

class FString UPrimalItem_WeaponElectronicBinoculars_C::BPGetItemDescription(class AShooterPlayerController** ForPC, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, class FString* CallFunc_FormatTextureAsRichText_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue_1, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_2, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue_2, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue_1, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue_2, class FString* CallFunc_FormatTextureAsRichText_ReturnValue_1, class FString* CallFunc_FormatTextureAsRichText_ReturnValue_2, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_2, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_3, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue_3, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue_3, class FString* CallFunc_FormatTextureAsRichText_ReturnValue_3, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_3, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_5, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_6, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_7, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_1, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponElectronicBinoculars_C", "BPGetItemDescription");

	Params::UPrimalItem_WeaponElectronicBinoculars_C_BPGetItemDescription_Params Parms{};

	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;
	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1 = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1;
	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_2 = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_2;
	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_3 = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ForPC != nullptr)
		*ForPC = Parms.ForPC;

	if (CallFunc_BPGetGlobalUIData_ReturnValue != nullptr)
		*CallFunc_BPGetGlobalUIData_ReturnValue = Parms.CallFunc_BPGetGlobalUIData_ReturnValue;

	if (CallFunc_GetIconForKeyName_ReturnValue != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue = Parms.CallFunc_GetIconForKeyName_ReturnValue;

	if (CallFunc_FormatTextureAsRichText_ReturnValue != nullptr)
		*CallFunc_FormatTextureAsRichText_ReturnValue = std::move(Parms.CallFunc_FormatTextureAsRichText_ReturnValue);

	if (K2Node_MakeStruct_FormatArgumentData != nullptr)
		*K2Node_MakeStruct_FormatArgumentData = std::move(Parms.K2Node_MakeStruct_FormatArgumentData);

	if (CallFunc_BPGetGlobalUIData_ReturnValue_1 != nullptr)
		*CallFunc_BPGetGlobalUIData_ReturnValue_1 = Parms.CallFunc_BPGetGlobalUIData_ReturnValue_1;

	if (CallFunc_BPGetGlobalUIData_ReturnValue_2 != nullptr)
		*CallFunc_BPGetGlobalUIData_ReturnValue_2 = Parms.CallFunc_BPGetGlobalUIData_ReturnValue_2;

	if (CallFunc_GetIconForKeyName_ReturnValue_1 != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue_1 = Parms.CallFunc_GetIconForKeyName_ReturnValue_1;

	if (CallFunc_GetIconForKeyName_ReturnValue_2 != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue_2 = Parms.CallFunc_GetIconForKeyName_ReturnValue_2;

	if (CallFunc_FormatTextureAsRichText_ReturnValue_1 != nullptr)
		*CallFunc_FormatTextureAsRichText_ReturnValue_1 = std::move(Parms.CallFunc_FormatTextureAsRichText_ReturnValue_1);

	if (CallFunc_FormatTextureAsRichText_ReturnValue_2 != nullptr)
		*CallFunc_FormatTextureAsRichText_ReturnValue_2 = std::move(Parms.CallFunc_FormatTextureAsRichText_ReturnValue_2);

	if (K2Node_MakeStruct_FormatArgumentData_1 != nullptr)
		*K2Node_MakeStruct_FormatArgumentData_1 = std::move(Parms.K2Node_MakeStruct_FormatArgumentData_1);

	if (K2Node_MakeStruct_FormatArgumentData_2 != nullptr)
		*K2Node_MakeStruct_FormatArgumentData_2 = std::move(Parms.K2Node_MakeStruct_FormatArgumentData_2);

	if (CallFunc_BPGetGlobalUIData_ReturnValue_3 != nullptr)
		*CallFunc_BPGetGlobalUIData_ReturnValue_3 = Parms.CallFunc_BPGetGlobalUIData_ReturnValue_3;

	if (CallFunc_GetIconForKeyName_ReturnValue_3 != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue_3 = Parms.CallFunc_GetIconForKeyName_ReturnValue_3;

	if (CallFunc_FormatTextureAsRichText_ReturnValue_3 != nullptr)
		*CallFunc_FormatTextureAsRichText_ReturnValue_3 = std::move(Parms.CallFunc_FormatTextureAsRichText_ReturnValue_3);

	if (K2Node_MakeStruct_FormatArgumentData_3 != nullptr)
		*K2Node_MakeStruct_FormatArgumentData_3 = std::move(Parms.K2Node_MakeStruct_FormatArgumentData_3);

	if (K2Node_MakeStruct_FormatArgumentData_4 != nullptr)
		*K2Node_MakeStruct_FormatArgumentData_4 = std::move(Parms.K2Node_MakeStruct_FormatArgumentData_4);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (K2Node_MakeStruct_FormatArgumentData_5 != nullptr)
		*K2Node_MakeStruct_FormatArgumentData_5 = std::move(Parms.K2Node_MakeStruct_FormatArgumentData_5);

	if (K2Node_MakeStruct_FormatArgumentData_6 != nullptr)
		*K2Node_MakeStruct_FormatArgumentData_6 = std::move(Parms.K2Node_MakeStruct_FormatArgumentData_6);

	if (K2Node_MakeStruct_FormatArgumentData_7 != nullptr)
		*K2Node_MakeStruct_FormatArgumentData_7 = std::move(Parms.K2Node_MakeStruct_FormatArgumentData_7);

	if (K2Node_MakeArray_Array_1 != nullptr)
		*K2Node_MakeArray_Array_1 = std::move(Parms.K2Node_MakeArray_Array_1);

	return Parms.ReturnValue;

}

}


