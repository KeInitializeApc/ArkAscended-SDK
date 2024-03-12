#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C
// (None)

class UClass* UHUDPointOfInterestWidgetBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDPointOfInterestWidgetBP_C");

	return Clss;
}


// HUDPointOfInterestWidgetBP_C HUDPointOfInterestWidgetBP.Default__HUDPointOfInterestWidgetBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUDPointOfInterestWidgetBP_C* UHUDPointOfInterestWidgetBP_C::GetDefaultObj()
{
	static class UHUDPointOfInterestWidgetBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDPointOfInterestWidgetBP_C*>(UHUDPointOfInterestWidgetBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.FixConsoleIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UImage*                      K2Node_DynamicCast_AsImage                                       (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UHUDPointOfInterestWidgetBP_C::FixConsoleIcon(bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UImage** K2Node_DynamicCast_AsImage, bool* K2Node_DynamicCast_bSuccess, class FString* CallFunc_GetObjectName_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDPointOfInterestWidgetBP_C", "FixConsoleIcon");

	Params::UHUDPointOfInterestWidgetBP_C_FixConsoleIcon_Params Parms{};

	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BPGetGlobalUIData_ReturnValue != nullptr)
		*CallFunc_BPGetGlobalUIData_ReturnValue = Parms.CallFunc_BPGetGlobalUIData_ReturnValue;

	if (K2Node_DynamicCast_AsImage != nullptr)
		*K2Node_DynamicCast_AsImage = Parms.K2Node_DynamicCast_AsImage;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetObjectName_ReturnValue != nullptr)
		*CallFunc_GetObjectName_ReturnValue = std::move(Parms.CallFunc_GetObjectName_ReturnValue);

	if (CallFunc_GetIconForKeyName_ReturnValue != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue = Parms.CallFunc_GetIconForKeyName_ReturnValue;

	return Parms.ReturnValue;

}


// Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.DestroyPointOfInterestWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUDPointOfInterestWidgetBP_C::DestroyPointOfInterestWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDPointOfInterestWidgetBP_C", "DestroyPointOfInterestWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUDPointOfInterestWidgetBP_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDPointOfInterestWidgetBP_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.DestroyWidgetAfterAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUDPointOfInterestWidgetBP_C::DestroyWidgetAfterAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDPointOfInterestWidgetBP_C", "DestroyWidgetAfterAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UHUDPointOfInterestWidgetBP_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDPointOfInterestWidgetBP_C", "Tick");

	Params::UHUDPointOfInterestWidgetBP_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.PlayPulseAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUDPointOfInterestWidgetBP_C::PlayPulseAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDPointOfInterestWidgetBP_C", "PlayPulseAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.SetDismissOverlay
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)

void UHUDPointOfInterestWidgetBP_C::SetDismissOverlay(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDPointOfInterestWidgetBP_C", "SetDismissOverlay");

	Params::UHUDPointOfInterestWidgetBP_C_SetDismissOverlay_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.ExecuteUbergraph_HUDPointOfInterestWidgetBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalBuff_Companion*       K2Node_DynamicCast_AsPrimal_Buff_Companion                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetPointOfInterestWorldLocation_ReturnValue             (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue_1                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character_1                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_2                    (Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_2                   (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_5                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// bool                               Temp_bool_IsClosed_Variable                                      (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_2                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_3                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_4                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               Temp_bool_IsClosed_Variable_1                                    (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UWidgetAnimation*            K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_6                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               K2Node_Event_Visible                                             (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    CallFunc_GetPC_ReturnValue                                       (ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_5                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_6                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_7                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_8                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_LessEqual_DoubleDouble_B_ImplicitCast                   (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1                 (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (Edit, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1                (Edit, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_2                (Edit, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)

double UHUDPointOfInterestWidgetBP_C::ExecuteUbergraph_HUDPointOfInterestWidgetBP(int32* EntryPoint, class APawn** CallFunc_GetOwningPlayerPawn_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APawn** CallFunc_GetOwningPlayerPawn_ReturnValue_1, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character_1, bool* K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, bool Temp_bool_Variable, class UWidgetAnimation* K2Node_Select_Default, class AShooterPlayerController* CallFunc_GetPC_ReturnValue, double* CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double* CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDPointOfInterestWidgetBP_C", "ExecuteUbergraph_HUDPointOfInterestWidgetBP");

	Params::UHUDPointOfInterestWidgetBP_C_ExecuteUbergraph_HUDPointOfInterestWidgetBP_Params Parms{};

	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetPC_ReturnValue = CallFunc_GetPC_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1 = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_2 = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_GetOwningPlayerPawn_ReturnValue != nullptr)
		*CallFunc_GetOwningPlayerPawn_ReturnValue = Parms.CallFunc_GetOwningPlayerPawn_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_GetOwningPlayerPawn_ReturnValue_1 != nullptr)
		*CallFunc_GetOwningPlayerPawn_ReturnValue_1 = Parms.CallFunc_GetOwningPlayerPawn_ReturnValue_1;

	if (K2Node_DynamicCast_AsPrimal_Character_1 != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character_1 = Parms.K2Node_DynamicCast_AsPrimal_Character_1;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	if (CallFunc_LessEqual_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;

	if (CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1 != nullptr)
		*CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1 = Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1;

	return Parms.ReturnValue;

}

}


