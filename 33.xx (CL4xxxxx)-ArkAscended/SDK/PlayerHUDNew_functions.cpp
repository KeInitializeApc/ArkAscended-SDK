#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerHUDNew.PlayerHUDNew_C
// (None)

class UClass* UPlayerHUDNew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerHUDNew_C");

	return Clss;
}


// PlayerHUDNew_C PlayerHUDNew.Default__PlayerHUDNew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerHUDNew_C* UPlayerHUDNew_C::GetDefaultObj()
{
	static class UPlayerHUDNew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerHUDNew_C*>(UPlayerHUDNew_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerHUDNew.PlayerHUDNew_C.UpdateTetherDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             HostDistance                                                     (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FLinearColor                CallFunc_LinearColor_Red_ReturnValue                             (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsSplitscreen_ReturnValue                               (BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// enum class ENetModeBP              CallFunc_SwitchNetworkMode_OutNetworkMode                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class AShooterCharacter*>   CallFunc_GetAllLocalPlayerCharacters_ReturnValue                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsVerboseDisplayEnabled_ReturnValue                     (ConstParm, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Vector_Distance_ReturnValue                             (Edit, ConstParm, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_CanBeTetheredByPlayer_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_GameModeHasPlayerTethering_ReturnValue                  (BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FColor                      CallFunc_GetStatusColorForPlayerTetherDistance_ReturnValue       (Edit, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue_1                   (ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_GetStatusColorForPlayerTetherDistance_distance_ImplicitCast(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool UPlayerHUDNew_C::UpdateTetherDistance(double HostDistance, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, struct FLinearColor* CallFunc_LinearColor_Red_ReturnValue, bool Temp_bool_Variable_1, int32 Temp_int_Loop_Counter_Variable, bool* CallFunc_NearlyEqual_FloatFloat_ReturnValue, class FText* CallFunc_Conv_DoubleToText_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, bool* CallFunc_IsSplitscreen_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AShooterCharacter*>* CallFunc_GetAllLocalPlayerCharacters_ReturnValue, bool* CallFunc_IsVerboseDisplayEnabled_ReturnValue, class AShooterCharacter* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_CanBeTetheredByPlayer_ReturnValue, bool CallFunc_GameModeHasPlayerTethering_ReturnValue, struct FColor* CallFunc_GetStatusColorForPlayerTetherDistance_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, float* CallFunc_GetStatusColorForPlayerTetherDistance_distance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDNew_C", "UpdateTetherDistance");

	Params::UPlayerHUDNew_C_UpdateTetherDistance_Params Parms{};

	Parms.HostDistance = HostDistance;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_CanBeTetheredByPlayer_ReturnValue = CallFunc_CanBeTetheredByPlayer_ReturnValue;
	Parms.CallFunc_GameModeHasPlayerTethering_ReturnValue = CallFunc_GameModeHasPlayerTethering_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_LinearColor_Red_ReturnValue != nullptr)
		*CallFunc_LinearColor_Red_ReturnValue = std::move(Parms.CallFunc_LinearColor_Red_ReturnValue);

	if (CallFunc_NearlyEqual_FloatFloat_ReturnValue != nullptr)
		*CallFunc_NearlyEqual_FloatFloat_ReturnValue = Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue;

	if (CallFunc_Conv_DoubleToText_ReturnValue != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue = Parms.CallFunc_Conv_DoubleToText_ReturnValue;

	if (K2Node_MakeStruct_FormatArgumentData != nullptr)
		*K2Node_MakeStruct_FormatArgumentData = std::move(Parms.K2Node_MakeStruct_FormatArgumentData);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (CallFunc_IsSplitscreen_ReturnValue != nullptr)
		*CallFunc_IsSplitscreen_ReturnValue = Parms.CallFunc_IsSplitscreen_ReturnValue;

	if (CallFunc_GetAllLocalPlayerCharacters_ReturnValue != nullptr)
		*CallFunc_GetAllLocalPlayerCharacters_ReturnValue = std::move(Parms.CallFunc_GetAllLocalPlayerCharacters_ReturnValue);

	if (CallFunc_IsVerboseDisplayEnabled_ReturnValue != nullptr)
		*CallFunc_IsVerboseDisplayEnabled_ReturnValue = Parms.CallFunc_IsVerboseDisplayEnabled_ReturnValue;

	if (CallFunc_GetStatusColorForPlayerTetherDistance_ReturnValue != nullptr)
		*CallFunc_GetStatusColorForPlayerTetherDistance_ReturnValue = std::move(Parms.CallFunc_GetStatusColorForPlayerTetherDistance_ReturnValue);

	if (CallFunc_GetStatusColorForPlayerTetherDistance_distance_ImplicitCast != nullptr)
		*CallFunc_GetStatusColorForPlayerTetherDistance_distance_ImplicitCast = Parms.CallFunc_GetStatusColorForPlayerTetherDistance_distance_ImplicitCast;

	return Parms.ReturnValue;

}


// Function PlayerHUDNew.PlayerHUDNew_C.GetAllChildRecursively
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     OneWidget                                                        (BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class UWidget*>             AllChildWidget                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class UWidget*>             Local_ChildArray                                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class UWidget*>             K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// class UPanelWidget*                K2Node_DynamicCast_AsPanel_Widget                                (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildRecursively_AllChildWidget                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)

int32 UPlayerHUDNew_C::GetAllChildRecursively(class UWidget** OneWidget, const TArray<class UWidget*>& AllChildWidget, const TArray<class UWidget*>& Local_ChildArray, TArray<class UWidget*>* K2Node_MakeArray_Array, bool* K2Node_DynamicCast_bSuccess, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWidget* CallFunc_Array_Get_Item, const TArray<class UWidget*>& CallFunc_GetAllChildRecursively_AllChildWidget, int32 Temp_int_Loop_Counter_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDNew_C", "GetAllChildRecursively");

	Params::UPlayerHUDNew_C_GetAllChildRecursively_Params Parms{};

	Parms.AllChildWidget = AllChildWidget;
	Parms.Local_ChildArray = Local_ChildArray;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetAllChildRecursively_AllChildWidget = CallFunc_GetAllChildRecursively_AllChildWidget;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (OneWidget != nullptr)
		*OneWidget = Parms.OneWidget;

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetAllChildren_ReturnValue != nullptr)
		*CallFunc_GetAllChildren_ReturnValue = std::move(Parms.CallFunc_GetAllChildren_ReturnValue);

	return Parms.ReturnValue;

}


// Function PlayerHUDNew.PlayerHUDNew_C.FixConsoleIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             Local_UWidgetIcons                                               (Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// TArray<class UBorder*>             K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildRecursively_AllChildWidget                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UBorder*                     CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// class UImage*                      K2Node_DynamicCast_AsImage                                       (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue_1                             (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue_1                         (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)

int32 UPlayerHUDNew_C::FixConsoleIcons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, TArray<class UBorder*>* K2Node_MakeArray_Array, const TArray<class UWidget*>& CallFunc_GetAllChildRecursively_AllChildWidget, class UBorder* CallFunc_Array_Get_Item, class UWidget* CallFunc_Array_Get_Item_1, class UImage** K2Node_DynamicCast_AsImage, bool* K2Node_DynamicCast_bSuccess, class FString* CallFunc_GetObjectName_ReturnValue, class FString* CallFunc_GetObjectName_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDNew_C", "FixConsoleIcons");

	Params::UPlayerHUDNew_C_FixConsoleIcons_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetAllChildRecursively_AllChildWidget = CallFunc_GetAllChildRecursively_AllChildWidget;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (K2Node_DynamicCast_AsImage != nullptr)
		*K2Node_DynamicCast_AsImage = Parms.K2Node_DynamicCast_AsImage;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetObjectName_ReturnValue != nullptr)
		*CallFunc_GetObjectName_ReturnValue = std::move(Parms.CallFunc_GetObjectName_ReturnValue);

	if (CallFunc_GetObjectName_ReturnValue_1 != nullptr)
		*CallFunc_GetObjectName_ReturnValue_1 = std::move(Parms.CallFunc_GetObjectName_ReturnValue_1);

	if (CallFunc_BPGetGlobalUIData_ReturnValue != nullptr)
		*CallFunc_BPGetGlobalUIData_ReturnValue = Parms.CallFunc_BPGetGlobalUIData_ReturnValue;

	if (CallFunc_GetIconForKeyName_ReturnValue != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue = Parms.CallFunc_GetIconForKeyName_ReturnValue;

	if (CallFunc_GetIconForKeyName_ReturnValue_1 != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue_1 = Parms.CallFunc_GetIconForKeyName_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function PlayerHUDNew.PlayerHUDNew_C.UpdateRunningIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsCurrentlyActive_NewParam                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

void UPlayerHUDNew_C::UpdateRunningIcon(bool* CallFunc_IsCurrentlyActive_NewParam, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDNew_C", "UpdateRunningIcon");

	Params::UPlayerHUDNew_C_UpdateRunningIcon_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsCurrentlyActive_NewParam != nullptr)
		*CallFunc_IsCurrentlyActive_NewParam = Parms.CallFunc_IsCurrentlyActive_NewParam;

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

}


// Function PlayerHUDNew.PlayerHUDNew_C.SetElementBarBoostIconHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHidden                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)

void UPlayerHUDNew_C::SetElementBarBoostIconHidden(bool* IsHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDNew_C", "SetElementBarBoostIconHidden");

	Params::UPlayerHUDNew_C_SetElementBarBoostIconHidden_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsHidden != nullptr)
		*IsHidden = Parms.IsHidden;

}


// Function PlayerHUDNew.PlayerHUDNew_C.OnFastInventoryChangedBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bActivate                                                        (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UPlayerHUDNew_C::OnFastInventoryChangedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDNew_C", "OnFastInventoryChangedBP");

	Params::UPlayerHUDNew_C_OnFastInventoryChangedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerHUDNew.PlayerHUDNew_C.OnGamepadActiveChangedBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsGamepadActive                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UPlayerHUDNew_C::OnGamepadActiveChangedBP(bool* bIsGamepadActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDNew_C", "OnGamepadActiveChangedBP");

	Params::UPlayerHUDNew_C_OnGamepadActiveChangedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsGamepadActive != nullptr)
		*bIsGamepadActive = Parms.bIsGamepadActive;

}


// Function PlayerHUDNew.PlayerHUDNew_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerHUDNew_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDNew_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerHUDNew.PlayerHUDNew_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UPlayerHUDNew_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDNew_C", "Tick");

	Params::UPlayerHUDNew_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function PlayerHUDNew.PlayerHUDNew_C.UpdatedKeybindingBP
// (Event, Public, BlueprintEvent)
// Parameters:

void UPlayerHUDNew_C::UpdatedKeybindingBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDNew_C", "UpdatedKeybindingBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerHUDNew.PlayerHUDNew_C.ExecuteUbergraph_PlayerHUDNew
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               K2Node_Event_IsHidden                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_Event_bActivate                                           (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_Event_bIsGamepadActive                                    (Edit, ConstParm, ExportObject, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_1                 (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// class AShooterCharacter*           CallFunc_GetPlayerCharacter_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// TArray<class UTextBlock*>          K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class UTextBlock*>          K2Node_MakeArray_Array_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// class UTextBlock*                  CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// class UTextBlock*                  CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, EditorOnly)
// class FString                      CallFunc_SelectString_ReturnValue                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_GetKeybindDisplayName_ReturnValue                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FText UPlayerHUDNew_C::ExecuteUbergraph_PlayerHUDNew(int32* EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool K2Node_Event_IsHidden, bool K2Node_Event_bActivate, bool* K2Node_Event_bIsGamepadActive, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_1, bool* K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TArray<class UTextBlock*>* K2Node_MakeArray_Array, TArray<class UTextBlock*>* K2Node_MakeArray_Array_1, class UTextBlock* CallFunc_Array_Get_Item, int32 Temp_int_Array_Index_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UTextBlock* CallFunc_Array_Get_Item_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDNew_C", "ExecuteUbergraph_PlayerHUDNew");

	Params::UPlayerHUDNew_C_ExecuteUbergraph_PlayerHUDNew_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_Event_IsHidden = K2Node_Event_IsHidden;
	Parms.K2Node_Event_bActivate = K2Node_Event_bActivate;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_Event_bIsGamepadActive != nullptr)
		*K2Node_Event_bIsGamepadActive = Parms.K2Node_Event_bIsGamepadActive;

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_AsShooter_Player_Controller_1 != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller_1 = Parms.K2Node_DynamicCast_AsShooter_Player_Controller_1;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (K2Node_MakeArray_Array_1 != nullptr)
		*K2Node_MakeArray_Array_1 = std::move(Parms.K2Node_MakeArray_Array_1);

	return Parms.ReturnValue;

}

}


