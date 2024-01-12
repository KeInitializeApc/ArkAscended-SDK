#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x511 (0x841 - 0x330)
// WidgetBlueprintGeneratedClass UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C
class UUI_ModSuccessfullyInsalled_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      PopIn;                                             // 0x338(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, InstancedReference, SubobjectReference)
	class UButton*                               Button_ModInstalled;                               // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_47;                                          // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NoDestructor)
	class UImage*                                IMG_Thumbnail;                                     // 0x350(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Message;                                      // 0x358(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Name;                                         // 0x360(0x8)(ConstParm, Net, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInstallProgressMod                   ModInfo;                                           // 0x368(0x480)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class FText                                  MessageText;                                       // 0x7E8(0x18)(EditFixedSize, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          BackgroundColor;                                   // 0x800(0x10)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           NameColor;                                         // 0x810(0x14)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FSlateColor                           MessageColor;                                      // 0x824(0x14)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenuRef;                                      // 0x838(0x8)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         AnimationFinished;                                 // 0x840(0x1)(Edit, ConstParm, BlueprintReadOnly, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ModSuccessfullyInsalled_C* GetDefaultObj();

	void OnClicked();
	class UTexture2DDynamic* OnFail_E84A8D0E4FF41AB6F8FDA4A13C0CED23();
	class UTexture2DDynamic* OnSuccess_E84A8D0E4FF41AB6F8FDA4A13C0CED23();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ModSuccessfullyInsalledWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	struct FInstallProgressMod Event_Pop_in_animation();
	void Event_Init();
	void ExitAnimation();
	void EnterAnimation();
	void ResetClick();
	void RequestExit();
	bool ExecuteUbergraph_UI_ModSuccessfullyInsalled(bool* CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class UTexture2DDynamic** K2Node_CustomEvent_Texture_1, class UTexture2DDynamic** K2Node_CustomEvent_Texture, class UTexture2DDynamic** Temp_object_Variable, bool* CallFunc_IsValid_ReturnValue_2, const struct FInstallProgressMod& K2Node_CustomEvent_Mod_Info, bool Temp_bool_IsClosed_Variable, bool* CallFunc_IsValid_ReturnValue_3, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool* CallFunc_IsValid_ReturnValue_4);
};

}


