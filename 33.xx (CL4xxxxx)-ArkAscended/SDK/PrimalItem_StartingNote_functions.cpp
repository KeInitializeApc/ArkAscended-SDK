#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_StartingNote.PrimalItem_StartingNote_C
// (None)

class UClass* UPrimalItem_StartingNote_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_StartingNote_C");

	return Clss;
}


// PrimalItem_StartingNote_C PrimalItem_StartingNote.Default__PrimalItem_StartingNote_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_StartingNote_C* UPrimalItem_StartingNote_C::GetDefaultObj()
{
	static class UPrimalItem_StartingNote_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_StartingNote_C*>(UPrimalItem_StartingNote_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPCanUse
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIgnoreCooldown                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_BPCanUse_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_TimeSince_ReturnValue                                   (Edit, Net, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BPCanImplantSuicide_ReturnValue                         (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)

bool UPrimalItem_StartingNote_C::BPCanUse(bool bIgnoreCooldown, bool CallFunc_BPCanUse_ReturnValue, bool* CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool* CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_BPCanImplantSuicide_ReturnValue, double* CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "BPCanUse");

	Params::UPrimalItem_StartingNote_C_BPCanUse_Params Parms{};

	Parms.bIgnoreCooldown = bIgnoreCooldown;
	Parms.CallFunc_BPCanUse_ReturnValue = CallFunc_BPCanUse_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_BPCanImplantSuicide_ReturnValue = CallFunc_BPCanImplantSuicide_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GreaterEqual_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_DoubleDouble_ReturnValue = Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	if (CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1 != nullptr)
		*CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1 = Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	return Parms.ReturnValue;

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPDrawItemIcon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                     ItemCanvas                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   ItemCanvasSize                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   ItemCanvasScale                                                  (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bItemEnabled                                                     (BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FLinearColor                TheTintColor                                                     (Edit, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_1                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue_1                    (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_2                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector2D_Y_2                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector2D_X_3                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector2D_Y_3                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue_2                    (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_4                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_BreakVector2D_Y_4                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, NonTransactional)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue_3                    (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UTexture2D*                  K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UPrimalItem_StartingNote_C::BPDrawItemIcon(const struct FVector2D& ItemCanvasScale, bool bItemEnabled, const struct FLinearColor& TheTintColor, bool Temp_bool_Variable, struct FVector2D* CallFunc_Multiply_Vector2DFloat_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, struct FVector2D* CallFunc_Multiply_Vector2DFloat_ReturnValue_1, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, struct FVector2D* CallFunc_Multiply_Vector2DFloat_ReturnValue_2, double CallFunc_BreakVector2D_X_4, double CallFunc_BreakVector2D_Y_4, struct FVector2D* CallFunc_Multiply_Vector2DFloat_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, class UTexture2D** K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "BPDrawItemIcon");

	Params::UPrimalItem_StartingNote_C_BPDrawItemIcon_Params Parms{};

	Parms.ItemCanvasScale = ItemCanvasScale;
	Parms.bItemEnabled = bItemEnabled;
	Parms.TheTintColor = TheTintColor;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.CallFunc_BreakVector2D_X_3 = CallFunc_BreakVector2D_X_3;
	Parms.CallFunc_BreakVector2D_Y_3 = CallFunc_BreakVector2D_Y_3;
	Parms.CallFunc_BreakVector2D_X_4 = CallFunc_BreakVector2D_X_4;
	Parms.CallFunc_BreakVector2D_Y_4 = CallFunc_BreakVector2D_Y_4;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Multiply_Vector2DFloat_ReturnValue != nullptr)
		*CallFunc_Multiply_Vector2DFloat_ReturnValue = std::move(Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue);

	if (CallFunc_Multiply_Vector2DFloat_ReturnValue_1 != nullptr)
		*CallFunc_Multiply_Vector2DFloat_ReturnValue_1 = std::move(Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue_1);

	if (CallFunc_Multiply_Vector2DFloat_ReturnValue_2 != nullptr)
		*CallFunc_Multiply_Vector2DFloat_ReturnValue_2 = std::move(Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue_2);

	if (CallFunc_Multiply_Vector2DFloat_ReturnValue_3 != nullptr)
		*CallFunc_Multiply_Vector2DFloat_ReturnValue_3 = std::move(Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue_3);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemIcon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerController*    ForPC                                                            (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class UTexture2D*                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UTexture2D*                  K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UPrimalItem_StartingNote_C::BPGetItemIcon(bool Temp_bool_Variable, class UTexture2D** K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "BPGetItemIcon");

	Params::UPrimalItem_StartingNote_C_BPGetItemIcon_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.IsLocalImplant
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerController*    ForPC                                                            (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               IsLocal                                                          (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig)
// bool                               bRetVal                                                          (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

bool UPrimalItem_StartingNote_C::IsLocalImplant(bool bRetVal, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, struct FCustomItemData* CallFunc_GetCustomItemData_OutData, bool* CallFunc_GetCustomItemData_ReturnValue, class FString* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "IsLocalImplant");

	Params::UPrimalItem_StartingNote_C_IsLocalImplant_Params Parms{};

	Parms.bRetVal = bRetVal;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_GetCustomItemData_OutData != nullptr)
		*CallFunc_GetCustomItemData_OutData = std::move(Parms.CallFunc_GetCustomItemData_OutData);

	if (CallFunc_GetCustomItemData_ReturnValue != nullptr)
		*CallFunc_GetCustomItemData_ReturnValue = Parms.CallFunc_GetCustomItemData_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	return Parms.ReturnValue;

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ItemNameIn                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    ForPC                                                            (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsLocalImplant_IsLocal                                  (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

class FString UPrimalItem_StartingNote_C::BPGetItemName(const class FString& ItemNameIn, bool Temp_bool_Variable, bool* CallFunc_IsLocalImplant_IsLocal, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FString* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "BPGetItemName");

	Params::UPrimalItem_StartingNote_C_BPGetItemName_Params Parms{};

	Parms.ItemNameIn = ItemNameIn;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsLocalImplant_IsLocal != nullptr)
		*CallFunc_IsLocalImplant_IsLocal = Parms.CallFunc_IsLocalImplant_IsLocal;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	return Parms.ReturnValue;

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.Get Survival Quotient String
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<double>                     SurvData                                                         (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FString                      OutString                                                        (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      RetVal                                                           (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// int32                              Temp_int_Variable                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_FFloor_ReturnValue                                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FArrayOfStrings             CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Len_ReturnValue                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_3                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Array_Get_Item_4                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Array_Get_Item_5                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Len_ReturnValue_1                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UPrimalItem_StartingNote_C::Get_Survival_Quotient_String(int32* Temp_int_Variable, int32* CallFunc_Array_Length_ReturnValue, double* CallFunc_Array_Get_Item, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, struct FArrayOfStrings* CallFunc_Array_Get_Item_1, class FString* CallFunc_Array_Get_Item_2, int32* CallFunc_Len_ReturnValue, class FString* CallFunc_Array_Get_Item_3, class FString* CallFunc_Array_Get_Item_4, int32* CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FString* CallFunc_Array_Get_Item_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, int32* CallFunc_Len_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "Get Survival Quotient String");

	Params::UPrimalItem_StartingNote_C_Get_Survival_Quotient_String_Params Parms{};

	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = std::move(Parms.CallFunc_Array_Get_Item_1);

	if (CallFunc_Array_Get_Item_2 != nullptr)
		*CallFunc_Array_Get_Item_2 = std::move(Parms.CallFunc_Array_Get_Item_2);

	if (CallFunc_Len_ReturnValue != nullptr)
		*CallFunc_Len_ReturnValue = Parms.CallFunc_Len_ReturnValue;

	if (CallFunc_Array_Get_Item_3 != nullptr)
		*CallFunc_Array_Get_Item_3 = std::move(Parms.CallFunc_Array_Get_Item_3);

	if (CallFunc_Array_Get_Item_4 != nullptr)
		*CallFunc_Array_Get_Item_4 = std::move(Parms.CallFunc_Array_Get_Item_4);

	if (CallFunc_Array_Length_ReturnValue_1 != nullptr)
		*CallFunc_Array_Length_ReturnValue_1 = Parms.CallFunc_Array_Length_ReturnValue_1;

	if (CallFunc_Array_Get_Item_5 != nullptr)
		*CallFunc_Array_Get_Item_5 = std::move(Parms.CallFunc_Array_Get_Item_5);

	if (CallFunc_Len_ReturnValue_1 != nullptr)
		*CallFunc_Len_ReturnValue_1 = Parms.CallFunc_Len_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemDescription
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InDescription                                                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bGetLongDescription                                              (ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    ForPC                                                            (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             FloatCastVar                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FString                      SecondaryString                                                  (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_GetPersistentTimeInSeconds_ReturnValue                  (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_BPCanImplantSuicide_ReturnValue                         (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class AShooterGameState*           K2Node_DynamicCast_AsShooter_Game_State                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, EditConst, SubobjectReference)
// int32                              CallFunc_FFloor_ReturnValue                                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Max_ReturnValue                                         (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              CallFunc_TimeSince_ReturnValue                                   (Edit, Net, ReturnParm, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_BPFormatAsTime_ReturnValue                              (BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// int32                              CallFunc_Round_ReturnValue                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_Format_ReturnValue_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, NonTransactional)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class FText                        CallFunc_Format_ReturnValue_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_Format_ReturnValue_3                                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_A_ImplicitCast                          (ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

TArray<struct FFormatArgumentData> UPrimalItem_StartingNote_C::BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, double* CallFunc_GetPersistentTimeInSeconds_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class AGameStateBase** CallFunc_GetGameState_ReturnValue, bool CallFunc_BPCanImplantSuicide_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, bool* K2Node_DynamicCast_bSuccess_2, double CallFunc_Multiply_DoubleFloat_ReturnValue, double* CallFunc_Add_DoubleFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, bool* CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const class FString& CallFunc_BPFormatAsTime_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_Format_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_1, class AActor** CallFunc_GetOwner_ReturnValue_1, bool* K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2, class FText CallFunc_Format_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleFloat_A_ImplicitCast, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast, float* CallFunc_Add_DoubleFloat_B_ImplicitCast, double* CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "BPGetItemDescription");

	Params::UPrimalItem_StartingNote_C_BPGetItemDescription_Params Parms{};

	Parms.InDescription = InDescription;
	Parms.bGetLongDescription = bGetLongDescription;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_BPCanImplantSuicide_ReturnValue = CallFunc_BPCanImplantSuicide_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_BPFormatAsTime_ReturnValue = CallFunc_BPFormatAsTime_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_2 = CallFunc_Multiply_DoubleFloat_ReturnValue_2;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Add_DoubleFloat_A_ImplicitCast = CallFunc_Add_DoubleFloat_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetPersistentTimeInSeconds_ReturnValue != nullptr)
		*CallFunc_GetPersistentTimeInSeconds_ReturnValue = Parms.CallFunc_GetPersistentTimeInSeconds_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetGameState_ReturnValue != nullptr)
		*CallFunc_GetGameState_ReturnValue = Parms.CallFunc_GetGameState_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_DynamicCast_AsShooter_Player_State != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_State = Parms.K2Node_DynamicCast_AsShooter_Player_State;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_Add_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Add_DoubleFloat_ReturnValue = Parms.CallFunc_Add_DoubleFloat_ReturnValue;

	if (CallFunc_GreaterEqual_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_DoubleDouble_ReturnValue = Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_GetOwner_ReturnValue_1 != nullptr)
		*CallFunc_GetOwner_ReturnValue_1 = Parms.CallFunc_GetOwner_ReturnValue_1;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	if (CallFunc_Greater_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Greater_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	if (CallFunc_Subtract_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Subtract_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast;

	if (CallFunc_Add_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Add_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Add_DoubleFloat_B_ImplicitCast;

	if (CallFunc_Less_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Less_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast;

	return Parms.ReturnValue;

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPPreInitializeItem
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWorld*                      OptionalInitWorld                                                (Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      Temp_string_Variable                                             (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      Temp_string_Variable_1                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// int32                              Temp_int_Variable                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      Temp_string_Variable_2                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// class FString                      Temp_string_Variable_3                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, NonTransactional)
// class FString                      Temp_string_Variable_4                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, NonTransactional)
// class FString                      Temp_string_Variable_5                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, NonTransactional)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        Temp_text_Variable                                               (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FText                        Temp_text_Variable_1                                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// class FText                        Temp_text_Variable_2                                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// class FText                        Temp_text_Variable_3                                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
// class FText                        Temp_text_Variable_4                                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, NonTransactional)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      Temp_string_Variable_6                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      Temp_string_Variable_7                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, EditorOnly)
// int32                              Temp_int_Variable_2                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FString                      Temp_string_Variable_8                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, EditorOnly)
// class FString                      Temp_string_Variable_9                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, EditorOnly)
// class FString                      Temp_string_Variable_10                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp, EditorOnly)
// class FString                      Temp_string_Variable_11                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, NonTransactional, EditorOnly)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      Temp_string_Variable_12                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      Temp_string_Variable_13                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, NonTransactional, EditorOnly)
// int32                              Temp_int_Variable_3                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class FString                      K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsOfficialServer_ReturnValue                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<class FName>                K2Node_MakeArray_Array                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// TArray<class UClass*>              K2Node_MakeArray_Array_1                                         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_HasCustomItemData_ReturnValue                           (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<class UObject*>             K2Node_MakeArray_Array_2                                         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalInventoryComponent*   CallFunc_GetInitializeItemOwnerInventory_ReturnValue             (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_FFloor_ReturnValue                                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UTexture2D*                  CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UPrimalItem*                 CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_RemoveItem_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UObject*                     K2Node_Select_Default_1                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_Array_Get_Item_3                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// class AShooterPlayerController*    CallFunc_GetSpawnedForController_ReturnValue                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UTexture2D*                  CallFunc_Array_Get_Item_4                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UPrimalPlayerDataBP_Base_C*  K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_Array_Get_Item_5                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// class FString                      K2Node_Select_Default_2                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              K2Node_MakeArray_Array_3                                         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FCustomItemData             K2Node_MakeStruct_CustomItemData                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_SelectString_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_Array_Get_Item_6                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_Array_Get_Item_7                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// int32                              CallFunc_FFloor_ReturnValue_2                                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_FFloor_ReturnValue_3                                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional)
// class UTexture2D*                  CallFunc_Array_Get_Item_8                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// class FString                      K2Node_Select_Default_3                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UTexture2D*                  CallFunc_Array_Get_Item_9                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, EditorOnly)
// class FString                      K2Node_Select_Default_4                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UTexture2D*                  CallFunc_Array_Get_Item_10                                       (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FText                        K2Node_Select_Default_5                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class FString                      CallFunc_Get_Survival_Quotient_String_OutString                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_11                                       (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional, EditorOnly)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// class FString                      CallFunc_Array_Get_Item_12                                       (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Array_Get_Item_13                                       (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, NonTransactional)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_4                                         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<double>                     CallFunc_Get_Survival_Quotient_String_SurvData_ImplicitCast      (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_FFloor_A_ImplicitCast                                   (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_FFloor_A_ImplicitCast_1                                 (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// TArray<float>                      K2Node_MakeStruct_CustomDataFloats_ImplicitCast                  (Edit, ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FFloor_A_ImplicitCast_2                                 (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FFloor_A_ImplicitCast_3                                 (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional)

TArray<float> UPrimalItem_StartingNote_C::BPPreInitializeItem(class UWorld* OptionalInitWorld, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, int32* Temp_int_Variable, bool Temp_bool_Variable, int32* Temp_int_Variable_1, bool Temp_bool_Variable_1, int32* Temp_int_Variable_2, int32* Temp_int_Variable_3, class FString* K2Node_Select_Default, bool* CallFunc_IsOfficialServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_HasCustomItemData_ReturnValue, struct FCustomItemData* CallFunc_GetCustomItemData_OutData, bool* CallFunc_GetCustomItemData_ReturnValue, class UPrimalInventoryComponent** CallFunc_GetInitializeItemOwnerInventory_ReturnValue, float* CallFunc_Array_Get_Item, bool* CallFunc_IsValid_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue, class UTexture2D** CallFunc_Array_Get_Item_1, class UPrimalItem** CallFunc_Array_Get_Item_2, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool* CallFunc_RemoveItem_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool* CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_3, class UObject** K2Node_Select_Default_1, class AActor** CallFunc_GetOwner_ReturnValue, float* CallFunc_Array_Get_Item_3, bool* K2Node_DynamicCast_bSuccess, int32 CallFunc_FFloor_ReturnValue_1, class AShooterPlayerController** CallFunc_GetSpawnedForController_ReturnValue, class UTexture2D** CallFunc_Array_Get_Item_4, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, bool* K2Node_DynamicCast_bSuccess_1, bool* K2Node_DynamicCast_bSuccess_2, float* CallFunc_Array_Get_Item_5, class FString* K2Node_Select_Default_2, class FString* CallFunc_SelectString_ReturnValue, float* CallFunc_Array_Get_Item_6, float* CallFunc_Array_Get_Item_7, int32 CallFunc_FFloor_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue_3, class UTexture2D** CallFunc_Array_Get_Item_8, class FString* K2Node_Select_Default_3, int32* CallFunc_SelectInt_ReturnValue, class UTexture2D** CallFunc_Array_Get_Item_9, class FString* K2Node_Select_Default_4, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UTexture2D** CallFunc_Array_Get_Item_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText* K2Node_Select_Default_5, const class FString& CallFunc_Get_Survival_Quotient_String_OutString, class FText CallFunc_Conv_StringToText_ReturnValue, class FString* CallFunc_Array_Get_Item_11, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FString* CallFunc_Array_Get_Item_12, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FString* CallFunc_Array_Get_Item_13, class FText CallFunc_Conv_StringToText_ReturnValue_3, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<double>* CallFunc_Get_Survival_Quotient_String_SurvData_ImplicitCast, double CallFunc_FFloor_A_ImplicitCast, double CallFunc_FFloor_A_ImplicitCast_1, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_FFloor_A_ImplicitCast_2, double CallFunc_FFloor_A_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "BPPreInitializeItem");

	Params::UPrimalItem_StartingNote_C_BPPreInitializeItem_Params Parms{};

	Parms.OptionalInitWorld = OptionalInitWorld;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_FFloor_ReturnValue_2 = CallFunc_FFloor_ReturnValue_2;
	Parms.CallFunc_FFloor_ReturnValue_3 = CallFunc_FFloor_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Get_Survival_Quotient_String_OutString = CallFunc_Get_Survival_Quotient_String_OutString;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_FFloor_A_ImplicitCast = CallFunc_FFloor_A_ImplicitCast;
	Parms.CallFunc_FFloor_A_ImplicitCast_1 = CallFunc_FFloor_A_ImplicitCast_1;
	Parms.CallFunc_FFloor_A_ImplicitCast_2 = CallFunc_FFloor_A_ImplicitCast_2;
	Parms.CallFunc_FFloor_A_ImplicitCast_3 = CallFunc_FFloor_A_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (Temp_int_Variable_2 != nullptr)
		*Temp_int_Variable_2 = Parms.Temp_int_Variable_2;

	if (Temp_int_Variable_3 != nullptr)
		*Temp_int_Variable_3 = Parms.Temp_int_Variable_3;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	if (CallFunc_IsOfficialServer_ReturnValue != nullptr)
		*CallFunc_IsOfficialServer_ReturnValue = Parms.CallFunc_IsOfficialServer_ReturnValue;

	if (CallFunc_HasCustomItemData_ReturnValue != nullptr)
		*CallFunc_HasCustomItemData_ReturnValue = Parms.CallFunc_HasCustomItemData_ReturnValue;

	if (CallFunc_GetCustomItemData_OutData != nullptr)
		*CallFunc_GetCustomItemData_OutData = std::move(Parms.CallFunc_GetCustomItemData_OutData);

	if (CallFunc_GetCustomItemData_ReturnValue != nullptr)
		*CallFunc_GetCustomItemData_ReturnValue = Parms.CallFunc_GetCustomItemData_ReturnValue;

	if (CallFunc_GetInitializeItemOwnerInventory_ReturnValue != nullptr)
		*CallFunc_GetInitializeItemOwnerInventory_ReturnValue = Parms.CallFunc_GetInitializeItemOwnerInventory_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = Parms.CallFunc_Array_Get_Item_1;

	if (CallFunc_Array_Get_Item_2 != nullptr)
		*CallFunc_Array_Get_Item_2 = Parms.CallFunc_Array_Get_Item_2;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_RemoveItem_ReturnValue != nullptr)
		*CallFunc_RemoveItem_ReturnValue = Parms.CallFunc_RemoveItem_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (CallFunc_IsValid_ReturnValue_4 != nullptr)
		*CallFunc_IsValid_ReturnValue_4 = Parms.CallFunc_IsValid_ReturnValue_4;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (CallFunc_Array_Get_Item_3 != nullptr)
		*CallFunc_Array_Get_Item_3 = Parms.CallFunc_Array_Get_Item_3;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetSpawnedForController_ReturnValue != nullptr)
		*CallFunc_GetSpawnedForController_ReturnValue = Parms.CallFunc_GetSpawnedForController_ReturnValue;

	if (CallFunc_Array_Get_Item_4 != nullptr)
		*CallFunc_Array_Get_Item_4 = Parms.CallFunc_Array_Get_Item_4;

	if (K2Node_DynamicCast_AsShooter_Player_State != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_State = Parms.K2Node_DynamicCast_AsShooter_Player_State;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_Array_Get_Item_5 != nullptr)
		*CallFunc_Array_Get_Item_5 = Parms.CallFunc_Array_Get_Item_5;

	if (K2Node_Select_Default_2 != nullptr)
		*K2Node_Select_Default_2 = std::move(Parms.K2Node_Select_Default_2);

	if (CallFunc_SelectString_ReturnValue != nullptr)
		*CallFunc_SelectString_ReturnValue = std::move(Parms.CallFunc_SelectString_ReturnValue);

	if (CallFunc_Array_Get_Item_6 != nullptr)
		*CallFunc_Array_Get_Item_6 = Parms.CallFunc_Array_Get_Item_6;

	if (CallFunc_Array_Get_Item_7 != nullptr)
		*CallFunc_Array_Get_Item_7 = Parms.CallFunc_Array_Get_Item_7;

	if (CallFunc_Array_Get_Item_8 != nullptr)
		*CallFunc_Array_Get_Item_8 = Parms.CallFunc_Array_Get_Item_8;

	if (K2Node_Select_Default_3 != nullptr)
		*K2Node_Select_Default_3 = std::move(Parms.K2Node_Select_Default_3);

	if (CallFunc_SelectInt_ReturnValue != nullptr)
		*CallFunc_SelectInt_ReturnValue = Parms.CallFunc_SelectInt_ReturnValue;

	if (CallFunc_Array_Get_Item_9 != nullptr)
		*CallFunc_Array_Get_Item_9 = Parms.CallFunc_Array_Get_Item_9;

	if (K2Node_Select_Default_4 != nullptr)
		*K2Node_Select_Default_4 = std::move(Parms.K2Node_Select_Default_4);

	if (CallFunc_Array_Get_Item_10 != nullptr)
		*CallFunc_Array_Get_Item_10 = Parms.CallFunc_Array_Get_Item_10;

	if (K2Node_Select_Default_5 != nullptr)
		*K2Node_Select_Default_5 = Parms.K2Node_Select_Default_5;

	if (CallFunc_Array_Get_Item_11 != nullptr)
		*CallFunc_Array_Get_Item_11 = std::move(Parms.CallFunc_Array_Get_Item_11);

	if (CallFunc_Array_Get_Item_12 != nullptr)
		*CallFunc_Array_Get_Item_12 = std::move(Parms.CallFunc_Array_Get_Item_12);

	if (CallFunc_Array_Get_Item_13 != nullptr)
		*CallFunc_Array_Get_Item_13 = std::move(Parms.CallFunc_Array_Get_Item_13);

	if (CallFunc_Get_Survival_Quotient_String_SurvData_ImplicitCast != nullptr)
		*CallFunc_Get_Survival_Quotient_String_SurvData_ImplicitCast = std::move(Parms.CallFunc_Get_Survival_Quotient_String_SurvData_ImplicitCast);

	if (CallFunc_Greater_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Greater_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	if (CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 != nullptr)
		*CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;

	return Parms.ReturnValue;

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BlueprintUsed
// (Event, Public, BlueprintEvent)
// Parameters:

void UPrimalItem_StartingNote_C::BlueprintUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "BlueprintUsed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPOnUpdatedItemContextMenu
// (Event, Public, BlueprintEvent)
// Parameters:

void UPrimalItem_StartingNote_C::BPOnUpdatedItemContextMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "BPOnUpdatedItemContextMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.ExecuteUbergraph_PrimalItem_StartingNote
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_CanUse_ReturnValue                                      (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

double UPrimalItem_StartingNote_C::ExecuteUbergraph_PrimalItem_StartingNote(bool CallFunc_CanUse_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "ExecuteUbergraph_PrimalItem_StartingNote");

	Params::UPrimalItem_StartingNote_C_ExecuteUbergraph_PrimalItem_StartingNote_Params Parms{};

	Parms.CallFunc_CanUse_ReturnValue = CallFunc_CanUse_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}

}


