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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      PopIn;                                             // 0x338(0x8)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_ModInstalled;                               // 0x340(0x8)(BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_47;                                          // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NoDestructor)
	class UImage*                                IMG_Thumbnail;                                     // 0x350(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Message;                                      // 0x358(0x8)(Edit, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Name;                                         // 0x360(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInstallProgressMod                   ModInfo;                                           // 0x368(0x480)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  MessageText;                                       // 0x7E8(0x18)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          BackgroundColor;                                   // 0x800(0x10)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           NameColor;                                         // 0x810(0x14)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	struct FSlateColor                           MessageColor;                                      // 0x824(0x14)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenuRef;                                      // 0x838(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         AnimationFinished;                                 // 0x840(0x1)(Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_ModSuccessfullyInsalled_C* GetDefaultObj();

	void OnClicked();
	class UTexture2DDynamic* OnFail_E84A8D0E4FF41AB6F8FDA4A13C0CED23();
	class UTexture2DDynamic* OnSuccess_E84A8D0E4FF41AB6F8FDA4A13C0CED23();
	bool PreConstruct();
	void BndEvt__ModSuccessfullyInsalledWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Event_Pop_in_animation(const struct FInstallProgressMod& Mod_Info);
	void Event_Init();
	void ExitAnimation();
	void EnterAnimation();
	void ResetClick();
	void RequestExit();
	bool ExecuteUbergraph_UI_ModSuccessfullyInsalled(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTexture2DDynamic** K2Node_CustomEvent_Texture_1, class UTexture2DDynamic** K2Node_CustomEvent_Texture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FInstallProgressMod& K2Node_CustomEvent_Mod_Info, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue);
};

}


