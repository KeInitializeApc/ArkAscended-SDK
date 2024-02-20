#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ZoomImage.UI_ZoomImage_C
// (None)

class UClass* UUI_ZoomImage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ZoomImage_C");

	return Clss;
}


// UI_ZoomImage_C UI_ZoomImage.Default__UI_ZoomImage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ZoomImage_C* UUI_ZoomImage_C::GetDefaultObj()
{
	static class UUI_ZoomImage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ZoomImage_C*>(UUI_ZoomImage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ZoomImage.UI_ZoomImage_C.SequenceEvent__ENTRYPOINTUI_ZoomImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_ScreenshotImg                                                (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

void UUI_ZoomImage_C::SequenceEvent__ENTRYPOINTUI_ZoomImage(class UImage* IMG_ScreenshotImg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "SequenceEvent__ENTRYPOINTUI_ZoomImage");

	Params::UUI_ZoomImage_C_SequenceEvent__ENTRYPOINTUI_ZoomImage_Params Parms{};

	Parms.IMG_ScreenshotImg = IMG_ScreenshotImg;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ZoomImage.UI_ZoomImage_C.BPGamepadReleased
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        TheKey                                                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)

struct FKey UUI_ZoomImage_C::BPGamepadReleased(bool ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BPGamepadReleased");

	Params::UUI_ZoomImage_C_BPGamepadReleased_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ZoomImage.UI_ZoomImage_C.BPEscapeClosed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUI_ZoomImage_C::BPEscapeClosed(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BPEscapeClosed");

	Params::UUI_ZoomImage_C_BPEscapeClosed_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ZoomImage.UI_ZoomImage_C.BPHighlightWidgetOnStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUI_ZoomImage_C::BPHighlightWidgetOnStart(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BPHighlightWidgetOnStart");

	Params::UUI_ZoomImage_C_BPHighlightWidgetOnStart_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ZoomImage.UI_ZoomImage_C.BPCycleHighlighted
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUI_ZoomImage_C::BPCycleHighlighted(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BPCycleHighlighted");

	Params::UUI_ZoomImage_C_BPCycleHighlighted_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ZoomImage.UI_ZoomImage_C.PlayFadeInOnBeginPlayAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UUI_ZoomImage_C::PlayFadeInOnBeginPlayAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "PlayFadeInOnBeginPlayAnim");

	Params::UUI_ZoomImage_C_PlayFadeInOnBeginPlayAnim_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}


// Function UI_ZoomImage.UI_ZoomImage_C.UpdateToCurrentImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UTexture2DDynamic*>   CallFunc_GetScreenshotsInfo_Screenshots                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              CallFunc_GetScreenshotsInfo_Descriptions                         (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2DDynamic*           CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

class UTexture2DDynamic* UUI_ZoomImage_C::UpdateToCurrentImage(bool* CallFunc_IsValid_ReturnValue, TArray<class UTexture2DDynamic*>* CallFunc_GetScreenshotsInfo_Screenshots, TArray<class FString>* CallFunc_GetScreenshotsInfo_Descriptions, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "UpdateToCurrentImage");

	Params::UUI_ZoomImage_C_UpdateToCurrentImage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetScreenshotsInfo_Screenshots != nullptr)
		*CallFunc_GetScreenshotsInfo_Screenshots = std::move(Parms.CallFunc_GetScreenshotsInfo_Screenshots);

	if (CallFunc_GetScreenshotsInfo_Descriptions != nullptr)
		*CallFunc_GetScreenshotsInfo_Descriptions = std::move(Parms.CallFunc_GetScreenshotsInfo_Descriptions);

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function UI_ZoomImage.UI_ZoomImage_C.GetScreenshotsInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UTexture2DDynamic*>   Screenshots                                                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<class FString>              Descriptions                                                     (Edit, ConstParm, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UUI_ZoomImage_C::GetScreenshotsInfo(TArray<class UTexture2DDynamic*>* Screenshots, const TArray<class FString>& Descriptions, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "GetScreenshotsInfo");

	Params::UUI_ZoomImage_C_GetScreenshotsInfo_Params Parms{};

	Parms.Descriptions = Descriptions;

	UObject::ProcessEvent(Func, &Parms);

	if (Screenshots != nullptr)
		*Screenshots = std::move(Parms.Screenshots);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}


// Function UI_ZoomImage.UI_ZoomImage_C.UpdateScreenshotDescription
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UTexture2DDynamic*>   CallFunc_GetScreenshotsInfo_Screenshots                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              CallFunc_GetScreenshotsInfo_Descriptions                         (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class FString UUI_ZoomImage_C::UpdateScreenshotDescription(bool* CallFunc_IsValid_ReturnValue, TArray<class UTexture2DDynamic*>* CallFunc_GetScreenshotsInfo_Screenshots, TArray<class FString>* CallFunc_GetScreenshotsInfo_Descriptions, class FText* CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "UpdateScreenshotDescription");

	Params::UUI_ZoomImage_C_UpdateScreenshotDescription_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetScreenshotsInfo_Screenshots != nullptr)
		*CallFunc_GetScreenshotsInfo_Screenshots = std::move(Parms.CallFunc_GetScreenshotsInfo_Screenshots);

	if (CallFunc_GetScreenshotsInfo_Descriptions != nullptr)
		*CallFunc_GetScreenshotsInfo_Descriptions = std::move(Parms.CallFunc_GetScreenshotsInfo_Descriptions);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ZoomImage.UI_ZoomImage_C.UpdatePageCounter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FText                        CallFunc_GetScrrenshotPaginationText_ReturnValue                 (BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

void UUI_ZoomImage_C::UpdatePageCounter(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class FText CallFunc_GetScrrenshotPaginationText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "UpdatePageCounter");

	Params::UUI_ZoomImage_C_UpdatePageCounter_Params Parms{};

	Parms.CallFunc_GetScrrenshotPaginationText_ReturnValue = CallFunc_GetScrrenshotPaginationText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

}


// Function UI_ZoomImage.UI_ZoomImage_C.UpdateScreenshotImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<class UTexture2DDynamic*>   CallFunc_GetScreenshotsInfo_Screenshots                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              CallFunc_GetScreenshotsInfo_Descriptions                         (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)

bool UUI_ZoomImage_C::UpdateScreenshotImage(bool* CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<class UTexture2DDynamic*>* CallFunc_GetScreenshotsInfo_Screenshots, TArray<class FString>* CallFunc_GetScreenshotsInfo_Descriptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "UpdateScreenshotImage");

	Params::UUI_ZoomImage_C_UpdateScreenshotImage_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetScreenshotsInfo_Screenshots != nullptr)
		*CallFunc_GetScreenshotsInfo_Screenshots = std::move(Parms.CallFunc_GetScreenshotsInfo_Screenshots);

	if (CallFunc_GetScreenshotsInfo_Descriptions != nullptr)
		*CallFunc_GetScreenshotsInfo_Descriptions = std::move(Parms.CallFunc_GetScreenshotsInfo_Descriptions);

	return Parms.ReturnValue;

}


// Function UI_ZoomImage.UI_ZoomImage_C.UpdateAllScreenshotInformation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::UpdateAllScreenshotInformation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "UpdateAllScreenshotInformation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.UpdateButtonsStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTexture2DDynamic*>   CallFunc_GetScreenshotsInfo_Screenshots                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              CallFunc_GetScreenshotsInfo_Descriptions                         (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Int32_SubOne_ReturnValue                                (ConstParm, ExportObject, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, RepNotify, Interp)

int32 UUI_ZoomImage_C::UpdateButtonsStyle(TArray<class UTexture2DDynamic*>* CallFunc_GetScreenshotsInfo_Screenshots, TArray<class FString>* CallFunc_GetScreenshotsInfo_Descriptions, int32* CallFunc_Int32_SubOne_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "UpdateButtonsStyle");

	Params::UUI_ZoomImage_C_UpdateButtonsStyle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetScreenshotsInfo_Screenshots != nullptr)
		*CallFunc_GetScreenshotsInfo_Screenshots = std::move(Parms.CallFunc_GetScreenshotsInfo_Screenshots);

	if (CallFunc_GetScreenshotsInfo_Descriptions != nullptr)
		*CallFunc_GetScreenshotsInfo_Descriptions = std::move(Parms.CallFunc_GetScreenshotsInfo_Descriptions);

	if (CallFunc_Int32_SubOne_ReturnValue != nullptr)
		*CallFunc_Int32_SubOne_ReturnValue = Parms.CallFunc_Int32_SubOne_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_2 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_2 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2;

	return Parms.ReturnValue;

}


// Function UI_ZoomImage.UI_ZoomImage_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FKeyEvent                   InKeyEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (ConstParm, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

struct FGeometry UUI_ZoomImage_C::OnKeyDown(const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "OnKeyDown");

	Params::UUI_ZoomImage_C_OnKeyDown_Params Parms{};

	Parms.InKeyEvent = InKeyEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetOwningPlayer_ReturnValue != nullptr)
		*CallFunc_GetOwningPlayer_ReturnValue = Parms.CallFunc_GetOwningPlayer_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ZoomImage.UI_ZoomImage_C.Animation_SwapBetweenImages
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_ScreenshotImg                                                (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

void UUI_ZoomImage_C::Animation_SwapBetweenImages(class UImage* IMG_ScreenshotImg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "Animation_SwapBetweenImages");

	Params::UUI_ZoomImage_C_Animation_SwapBetweenImages_Params Parms{};

	Parms.IMG_ScreenshotImg = IMG_ScreenshotImg;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ZoomImage.UI_ZoomImage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.ButtonCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// enum class EViewState              State                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)

struct FKey UUI_ZoomImage_C::ButtonCall(enum class EViewState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "ButtonCall");

	Params::UUI_ZoomImage_C_ButtonCall_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ZoomImage.UI_ZoomImage_C.BindControllerAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::BindControllerAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BindControllerAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.GoBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::GoBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "GoBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.PrevImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::PrevImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "PrevImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.NextImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::NextImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "NextImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.BndEvt__UI_ZoomImage_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::BndEvt__UI_ZoomImage_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BndEvt__UI_ZoomImage_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UUI_ZoomImage_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "Tick");

	Params::UUI_ZoomImage_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ZoomImage.UI_ZoomImage_C.BndEvt__UI_ZoomImage_ButtonPrev2_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::BndEvt__UI_ZoomImage_ButtonPrev2_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BndEvt__UI_ZoomImage_ButtonPrev2_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.BndEvt__UI_ZoomImage_ButtonNext_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::BndEvt__UI_ZoomImage_ButtonNext_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BndEvt__UI_ZoomImage_ButtonNext_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.BndEvt__UI_ZoomImage_ButtonPrevMouse_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::BndEvt__UI_ZoomImage_ButtonPrevMouse_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BndEvt__UI_ZoomImage_ButtonPrevMouse_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.BndEvt__UI_ZoomImage_ButtonNextMouse_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::BndEvt__UI_ZoomImage_ButtonNextMouse_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BndEvt__UI_ZoomImage_ButtonNextMouse_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.ExecuteUbergraph_UI_ZoomImage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// class UImage*                      K2Node_CustomEvent_IMG_ScreenshotImg                             (BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FKey                        K2Node_CustomEvent_Key                                           (Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class EViewState              K2Node_CustomEvent_State                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_CanGoToNextImage_ReturnValue                            (BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_CanGoToPreviousImage_ReturnValue                        (BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)

FDelegateProperty_ UUI_ZoomImage_C::ExecuteUbergraph_UI_ZoomImage(class UImage* K2Node_CustomEvent_IMG_ScreenshotImg, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue_1, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_CanGoToNextImage_ReturnValue, bool* CallFunc_CanGoToPreviousImage_ReturnValue, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "ExecuteUbergraph_UI_ZoomImage");

	Params::UUI_ZoomImage_C_ExecuteUbergraph_UI_ZoomImage_Params Parms{};

	Parms.K2Node_CustomEvent_IMG_ScreenshotImg = K2Node_CustomEvent_IMG_ScreenshotImg;
	Parms.K2Node_CustomEvent_Key = K2Node_CustomEvent_Key;
	Parms.K2Node_CustomEvent_State = K2Node_CustomEvent_State;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetOwningPlayer_ReturnValue != nullptr)
		*CallFunc_GetOwningPlayer_ReturnValue = Parms.CallFunc_GetOwningPlayer_ReturnValue;

	if (CallFunc_GetOwningPlayer_ReturnValue_1 != nullptr)
		*CallFunc_GetOwningPlayer_ReturnValue_1 = Parms.CallFunc_GetOwningPlayer_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_CanGoToNextImage_ReturnValue != nullptr)
		*CallFunc_CanGoToNextImage_ReturnValue = Parms.CallFunc_CanGoToNextImage_ReturnValue;

	if (CallFunc_CanGoToPreviousImage_ReturnValue != nullptr)
		*CallFunc_CanGoToPreviousImage_ReturnValue = Parms.CallFunc_CanGoToPreviousImage_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	return Parms.ReturnValue;

}

}


