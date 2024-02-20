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
// bool                               bIgnoreCooldown                                                  (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BPCanUse_ReturnValue                                    (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_TimeSince_ReturnValue                                   (Edit, BlueprintReadOnly, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BPCanImplantSuicide_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UPrimalItem_StartingNote_C::BPCanUse(bool bIgnoreCooldown, bool ReturnValue, bool* CallFunc_BPCanUse_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_BPCanImplantSuicide_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "BPCanUse");

	Params::UPrimalItem_StartingNote_C_BPCanUse_Params Parms{};

	Parms.bIgnoreCooldown = bIgnoreCooldown;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BPCanUse_ReturnValue != nullptr)
		*CallFunc_BPCanUse_ReturnValue = Parms.CallFunc_BPCanUse_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_BPCanImplantSuicide_ReturnValue != nullptr)
		*CallFunc_BPCanImplantSuicide_ReturnValue = Parms.CallFunc_BPCanImplantSuicide_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPDrawItemIcon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                     ItemCanvas                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   ItemCanvasSize                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   ItemCanvasScale                                                  (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bItemEnabled                                                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// struct FLinearColor                TheTintColor                                                     (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_1                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue_1                    (BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_2                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector2D_Y_2                                       (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector2D_X_3                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector2D_Y_3                                       (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue_2                    (BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_4                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_BreakVector2D_Y_4                                       (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue_3                    (BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UTexture2D*                  K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)

bool UPrimalItem_StartingNote_C::BPDrawItemIcon(struct FVector2D* ItemCanvasScale, bool* bItemEnabled, struct FLinearColor* TheTintColor, bool* Temp_bool_Variable, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, double* CallFunc_BreakVector2D_X_1, double* CallFunc_BreakVector2D_Y_1, double* CallFunc_BreakVector2D_X_2, double* CallFunc_BreakVector2D_Y_2, double* CallFunc_BreakVector2D_X_3, double* CallFunc_BreakVector2D_Y_3, double* CallFunc_BreakVector2D_X_4, double* CallFunc_BreakVector2D_Y_4, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, class UTexture2D** K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "BPDrawItemIcon");

	Params::UPrimalItem_StartingNote_C_BPDrawItemIcon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemCanvasScale != nullptr)
		*ItemCanvasScale = std::move(Parms.ItemCanvasScale);

	if (bItemEnabled != nullptr)
		*bItemEnabled = Parms.bItemEnabled;

	if (TheTintColor != nullptr)
		*TheTintColor = std::move(Parms.TheTintColor);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_BreakVector2D_X != nullptr)
		*CallFunc_BreakVector2D_X = Parms.CallFunc_BreakVector2D_X;

	if (CallFunc_BreakVector2D_Y != nullptr)
		*CallFunc_BreakVector2D_Y = Parms.CallFunc_BreakVector2D_Y;

	if (CallFunc_BreakVector2D_X_1 != nullptr)
		*CallFunc_BreakVector2D_X_1 = Parms.CallFunc_BreakVector2D_X_1;

	if (CallFunc_BreakVector2D_Y_1 != nullptr)
		*CallFunc_BreakVector2D_Y_1 = Parms.CallFunc_BreakVector2D_Y_1;

	if (CallFunc_BreakVector2D_X_2 != nullptr)
		*CallFunc_BreakVector2D_X_2 = Parms.CallFunc_BreakVector2D_X_2;

	if (CallFunc_BreakVector2D_Y_2 != nullptr)
		*CallFunc_BreakVector2D_Y_2 = Parms.CallFunc_BreakVector2D_Y_2;

	if (CallFunc_BreakVector2D_X_3 != nullptr)
		*CallFunc_BreakVector2D_X_3 = Parms.CallFunc_BreakVector2D_X_3;

	if (CallFunc_BreakVector2D_Y_3 != nullptr)
		*CallFunc_BreakVector2D_Y_3 = Parms.CallFunc_BreakVector2D_Y_3;

	if (CallFunc_BreakVector2D_X_4 != nullptr)
		*CallFunc_BreakVector2D_X_4 = Parms.CallFunc_BreakVector2D_X_4;

	if (CallFunc_BreakVector2D_Y_4 != nullptr)
		*CallFunc_BreakVector2D_Y_4 = Parms.CallFunc_BreakVector2D_Y_4;

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
// class AShooterPlayerController*    ForPC                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2D*                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UTexture2D*                  K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)

bool UPrimalItem_StartingNote_C::BPGetItemIcon(class UTexture2D* ReturnValue, bool* Temp_bool_Variable, class UTexture2D** K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "BPGetItemIcon");

	Params::UPrimalItem_StartingNote_C_BPGetItemIcon_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.IsLocalImplant
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerController*    ForPC                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               IsLocal                                                          (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// bool                               bRetVal                                                          (Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)

bool UPrimalItem_StartingNote_C::IsLocalImplant(bool* bRetVal, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "IsLocalImplant");

	Params::UPrimalItem_StartingNote_C_IsLocalImplant_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bRetVal != nullptr)
		*bRetVal = Parms.bRetVal;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ItemNameIn                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    ForPC                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_IsLocalImplant_IsLocal                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)

class FString UPrimalItem_StartingNote_C::BPGetItemName(const class FString& ItemNameIn, const class FString& ReturnValue, bool* Temp_bool_Variable, class FString* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "BPGetItemName");

	Params::UPrimalItem_StartingNote_C_BPGetItemName_Params Parms{};

	Parms.ItemNameIn = ItemNameIn;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	return Parms.ReturnValue;

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.Get Survival Quotient String
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<double>                     SurvData                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      OutString                                                        (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// class FString                      RetVal                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_FFloor_ReturnValue                                      (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FArrayOfStrings             CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Len_ReturnValue                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_3                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Array_Get_Item_4                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Array_Get_Item_5                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Len_ReturnValue_1                                       (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)

int32 UPrimalItem_StartingNote_C::Get_Survival_Quotient_String(int32 CallFunc_FFloor_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "Get Survival Quotient String");

	Params::UPrimalItem_StartingNote_C_Get_Survival_Quotient_String_Params Parms{};

	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemDescription
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InDescription                                                    (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bGetLongDescription                                              (ExportObject, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    ForPC                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             FloatCastVar                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      SecondaryString                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, Net, Parm, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_GetPersistentTimeInSeconds_ReturnValue                  (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BPCanImplantSuicide_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterGameState*           K2Node_DynamicCast_AsShooter_Game_State                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// int32                              CallFunc_FFloor_ReturnValue                                      (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Max_ReturnValue                                         (ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// float                              CallFunc_TimeSince_ReturnValue                                   (Edit, BlueprintReadOnly, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_BPFormatAsTime_ReturnValue                              (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Round_ReturnValue                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class FText                        CallFunc_Format_ReturnValue_1                                    (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// class FText                        CallFunc_Format_ReturnValue_2                                    (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_Format_ReturnValue_3                                    (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_A_ImplicitCast                          (ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

double UPrimalItem_StartingNote_C::BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, const class FString& ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_BPCanImplantSuicide_ReturnValue, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, double* CallFunc_Subtract_DoubleFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class FString* CallFunc_BPFormatAsTime_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, double* CallFunc_Subtract_DoubleFloat_ReturnValue_1, class FText* CallFunc_Format_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_Conv_DoubleToString_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FText* CallFunc_Format_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_1, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, class FText* CallFunc_Conv_IntToText_ReturnValue, class FText* CallFunc_Conv_IntToText_ReturnValue_1, class FText* CallFunc_Format_ReturnValue_2, class FText* CallFunc_Format_ReturnValue_3, class FString* CallFunc_Conv_TextToString_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_3, double* CallFunc_Add_DoubleFloat_A_ImplicitCast, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "BPGetItemDescription");

	Params::UPrimalItem_StartingNote_C_BPGetItemDescription_Params Parms{};

	Parms.InDescription = InDescription;
	Parms.bGetLongDescription = bGetLongDescription;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Test = K2Node_DynamicCast_AsPlayer_Pawn_Test;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_BPCanImplantSuicide_ReturnValue != nullptr)
		*CallFunc_BPCanImplantSuicide_ReturnValue = Parms.CallFunc_BPCanImplantSuicide_ReturnValue;

	if (K2Node_DynamicCast_AsShooter_Player_State != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_State = Parms.K2Node_DynamicCast_AsShooter_Player_State;

	if (CallFunc_Subtract_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue;

	if (CallFunc_BPFormatAsTime_ReturnValue != nullptr)
		*CallFunc_BPFormatAsTime_ReturnValue = std::move(Parms.CallFunc_BPFormatAsTime_ReturnValue);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_Subtract_DoubleFloat_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue_1 = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue_1;

	if (CallFunc_Format_ReturnValue != nullptr)
		*CallFunc_Format_ReturnValue = Parms.CallFunc_Format_ReturnValue;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_Conv_DoubleToString_ReturnValue != nullptr)
		*CallFunc_Conv_DoubleToString_ReturnValue = std::move(Parms.CallFunc_Conv_DoubleToString_ReturnValue);

	if (CallFunc_Conv_StringToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_1 = Parms.CallFunc_Conv_StringToText_ReturnValue_1;

	if (CallFunc_Format_ReturnValue_1 != nullptr)
		*CallFunc_Format_ReturnValue_1 = Parms.CallFunc_Format_ReturnValue_1;

	if (CallFunc_Conv_TextToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_1);

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_Conv_IntToText_ReturnValue != nullptr)
		*CallFunc_Conv_IntToText_ReturnValue = Parms.CallFunc_Conv_IntToText_ReturnValue;

	if (CallFunc_Conv_IntToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_IntToText_ReturnValue_1 = Parms.CallFunc_Conv_IntToText_ReturnValue_1;

	if (CallFunc_Format_ReturnValue_2 != nullptr)
		*CallFunc_Format_ReturnValue_2 = Parms.CallFunc_Format_ReturnValue_2;

	if (CallFunc_Format_ReturnValue_3 != nullptr)
		*CallFunc_Format_ReturnValue_3 = Parms.CallFunc_Format_ReturnValue_3;

	if (CallFunc_Conv_TextToString_ReturnValue_2 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_2 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_2);

	if (CallFunc_Conv_TextToString_ReturnValue_3 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_3 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_3);

	if (CallFunc_Add_DoubleFloat_A_ImplicitCast != nullptr)
		*CallFunc_Add_DoubleFloat_A_ImplicitCast = Parms.CallFunc_Add_DoubleFloat_A_ImplicitCast;

	if (CallFunc_Subtract_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Subtract_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPPreInitializeItem
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWorld*                      OptionalInitWorld                                                (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      Temp_string_Variable                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// class FString                      Temp_string_Variable_2                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FString                      Temp_string_Variable_3                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// class FString                      Temp_string_Variable_4                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class FString                      Temp_string_Variable_5                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
// class FText                        Temp_text_Variable                                               (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        Temp_text_Variable_1                                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FText                        Temp_text_Variable_2                                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FText                        Temp_text_Variable_3                                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class FText                        Temp_text_Variable_4                                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               Temp_bool_Variable_1                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// class FString                      Temp_string_Variable_6                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      Temp_string_Variable_7                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, EditorOnly)
// int32                              Temp_int_Variable_2                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class FString                      Temp_string_Variable_8                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// class FString                      Temp_string_Variable_9                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp, EditorOnly)
// class FString                      Temp_string_Variable_10                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// class FString                      Temp_string_Variable_11                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, NonTransactional, EditorOnly)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      Temp_string_Variable_12                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      Temp_string_Variable_13                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// int32                              Temp_int_Variable_3                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, NonTransactional)
// class FString                      K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_IsOfficialServer_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class FName>                K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// TArray<class UClass*>              K2Node_MakeArray_Array_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_HasCustomItemData_ReturnValue                           (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<class UObject*>             K2Node_MakeArray_Array_2                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalInventoryComponent*   CallFunc_GetInitializeItemOwnerInventory_ReturnValue             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_FFloor_ReturnValue                                      (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UTexture2D*                  CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UPrimalItem*                 CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_RemoveItem_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (Edit, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UObject*                     K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// float                              CallFunc_Array_Get_Item_3                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// class AShooterPlayerController*    CallFunc_GetSpawnedForController_ReturnValue                     (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UTexture2D*                  CallFunc_Array_Get_Item_4                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// class UPrimalPlayerDataBP_Base_C*  K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base                  (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_Array_Get_Item_5                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// class FString                      K2Node_Select_Default_2                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class FString>              K2Node_MakeArray_Array_3                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FCustomItemData             K2Node_MakeStruct_CustomItemData                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_SelectString_ReturnValue                                (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_Array_Get_Item_6                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_Array_Get_Item_7                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// int32                              CallFunc_FFloor_ReturnValue_2                                    (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_FFloor_ReturnValue_3                                    (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
// class UTexture2D*                  CallFunc_Array_Get_Item_8                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// class FString                      K2Node_Select_Default_3                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_SelectInt_ReturnValue                                   (BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UTexture2D*                  CallFunc_Array_Get_Item_9                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
// class FString                      K2Node_Select_Default_4                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UTexture2D*                  CallFunc_Array_Get_Item_10                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FText                        K2Node_Select_Default_5                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp, NonTransactional)
// class FString                      CallFunc_Get_Survival_Quotient_String_OutString                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_11                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Array_Get_Item_12                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Array_Get_Item_13                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_4                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<double>                     CallFunc_Get_Survival_Quotient_String_SurvData_ImplicitCast      (ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_FFloor_A_ImplicitCast                                   (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_FFloor_A_ImplicitCast_1                                 (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// TArray<float>                      K2Node_MakeStruct_CustomDataFloats_ImplicitCast                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_FFloor_A_ImplicitCast_2                                 (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FFloor_A_ImplicitCast_3                                 (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)

double UPrimalItem_StartingNote_C::BPPreInitializeItem(class UWorld* OptionalInitWorld, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* Temp_bool_Variable, bool* Temp_bool_Variable_1, class FString* K2Node_Select_Default, bool* CallFunc_IsValid_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_EqualEqual_ClassClass_ReturnValue, bool* CallFunc_IsValid_ReturnValue_4, class UObject** K2Node_Select_Default_1, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, int32 CallFunc_FFloor_ReturnValue_1, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, class FString* K2Node_Select_Default_2, class FString* CallFunc_SelectString_ReturnValue, int32 CallFunc_FFloor_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue_3, class FString* K2Node_Select_Default_3, int32* CallFunc_SelectInt_ReturnValue, class FString* K2Node_Select_Default_4, class FText* K2Node_Select_Default_5, class FString* CallFunc_Get_Survival_Quotient_String_OutString, class FText* CallFunc_Conv_StringToText_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue_2, class FText* CallFunc_Conv_StringToText_ReturnValue_3, class FText* CallFunc_Format_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, double CallFunc_FFloor_A_ImplicitCast, double CallFunc_FFloor_A_ImplicitCast_1, double CallFunc_FFloor_A_ImplicitCast_2, double CallFunc_FFloor_A_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "BPPreInitializeItem");

	Params::UPrimalItem_StartingNote_C_BPPreInitializeItem_Params Parms{};

	Parms.OptionalInitWorld = OptionalInitWorld;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Test = K2Node_DynamicCast_AsPlayer_Pawn_Test;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_FFloor_ReturnValue_2 = CallFunc_FFloor_ReturnValue_2;
	Parms.CallFunc_FFloor_ReturnValue_3 = CallFunc_FFloor_ReturnValue_3;
	Parms.CallFunc_FFloor_A_ImplicitCast = CallFunc_FFloor_A_ImplicitCast;
	Parms.CallFunc_FFloor_A_ImplicitCast_1 = CallFunc_FFloor_A_ImplicitCast_1;
	Parms.CallFunc_FFloor_A_ImplicitCast_2 = CallFunc_FFloor_A_ImplicitCast_2;
	Parms.CallFunc_FFloor_A_ImplicitCast_3 = CallFunc_FFloor_A_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_bool_Variable_1 != nullptr)
		*Temp_bool_Variable_1 = Parms.Temp_bool_Variable_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (CallFunc_EqualEqual_ClassClass_ReturnValue != nullptr)
		*CallFunc_EqualEqual_ClassClass_ReturnValue = Parms.CallFunc_EqualEqual_ClassClass_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_4 != nullptr)
		*CallFunc_IsValid_ReturnValue_4 = Parms.CallFunc_IsValid_ReturnValue_4;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (K2Node_DynamicCast_AsShooter_Player_State != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_State = Parms.K2Node_DynamicCast_AsShooter_Player_State;

	if (K2Node_Select_Default_2 != nullptr)
		*K2Node_Select_Default_2 = std::move(Parms.K2Node_Select_Default_2);

	if (CallFunc_SelectString_ReturnValue != nullptr)
		*CallFunc_SelectString_ReturnValue = std::move(Parms.CallFunc_SelectString_ReturnValue);

	if (K2Node_Select_Default_3 != nullptr)
		*K2Node_Select_Default_3 = std::move(Parms.K2Node_Select_Default_3);

	if (CallFunc_SelectInt_ReturnValue != nullptr)
		*CallFunc_SelectInt_ReturnValue = Parms.CallFunc_SelectInt_ReturnValue;

	if (K2Node_Select_Default_4 != nullptr)
		*K2Node_Select_Default_4 = std::move(Parms.K2Node_Select_Default_4);

	if (K2Node_Select_Default_5 != nullptr)
		*K2Node_Select_Default_5 = Parms.K2Node_Select_Default_5;

	if (CallFunc_Get_Survival_Quotient_String_OutString != nullptr)
		*CallFunc_Get_Survival_Quotient_String_OutString = std::move(Parms.CallFunc_Get_Survival_Quotient_String_OutString);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_Conv_StringToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_1 = Parms.CallFunc_Conv_StringToText_ReturnValue_1;

	if (CallFunc_Conv_StringToText_ReturnValue_2 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_2 = Parms.CallFunc_Conv_StringToText_ReturnValue_2;

	if (CallFunc_Conv_StringToText_ReturnValue_3 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_3 = Parms.CallFunc_Conv_StringToText_ReturnValue_3;

	if (CallFunc_Format_ReturnValue != nullptr)
		*CallFunc_Format_ReturnValue = Parms.CallFunc_Format_ReturnValue;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_CanUse_ReturnValue                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, Net, Parm, ReturnParm, Config, SubobjectReference)

double UPrimalItem_StartingNote_C::ExecuteUbergraph_PrimalItem_StartingNote(bool* CallFunc_CanUse_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_StartingNote_C", "ExecuteUbergraph_PrimalItem_StartingNote");

	Params::UPrimalItem_StartingNote_C_ExecuteUbergraph_PrimalItem_StartingNote_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_CanUse_ReturnValue != nullptr)
		*CallFunc_CanUse_ReturnValue = Parms.CallFunc_CanUse_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}

}


