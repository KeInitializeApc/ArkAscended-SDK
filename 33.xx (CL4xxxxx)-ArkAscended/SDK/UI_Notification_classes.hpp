#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x3C8 - 0x330)
// WidgetBlueprintGeneratedClass UI_Notification.UI_Notification_C
class UUI_Notification_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      PopIn;                                             // 0x338(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Menu;                                       // 0x340(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_ModInstalled;                               // 0x348(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_3;                                           // 0x350(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, NonTransactional)
	class UImage*                                IMG_BG_1;                                          // 0x358(0x8)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                IMG_BG_3;                                          // 0x360(0x8)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class UImage*                                IMG_Thumbnail;                                     // 0x368(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_MainMessage;                                  // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_SecondaryMessage;                             // 0x378(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  Main_Text;                                         // 0x380(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  SecondaryText;                                     // 0x398(0x18)(Edit, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         AnimationFinished;                                 // 0x3B0(0x1)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2F84[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ThumnailURL;                                       // 0x3B8(0x10)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Notification_C* GetDefaultObj();

	void Debug();
	void SetSecondaryMessage(class FText* InText, bool* CallFunc_IsValid_ReturnValue);
	void SetMainMessage(class FText* InText, bool* CallFunc_IsValid_ReturnValue);
	void OnClicked();
	void OnFail_E84A8D0E4FF41AB6F8FDA4A13C0CED23(class UTexture2DDynamic** Texture);
	void OnSuccess_E84A8D0E4FF41AB6F8FDA4A13C0CED23(class UTexture2DDynamic** Texture);
	void BndEvt__ModSuccessfullyInsalledWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	class FText CreateAndPlayAnimation(class UTexture2DDynamic** Texture, class FString* ThumbnailUrl, class FText MainText);
	void Event_Init();
	void ExitAnimation();
	void EnterAnimation();
	void ResetClick();
	void RequestExit();
	void PreConstruct(bool* IsDesignTime);
	void Download_Thumbnail(class FString* ThumbnailUrl);
	void PopInAnimation();
	void Construct();
	bool ExecuteUbergraph_UI_Notification(class UTexture2DDynamic* K2Node_CustomEvent_Texture_2, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, class UTexture2DDynamic* Temp_object_Variable, bool* CallFunc_IsValid_ReturnValue, class UTexture2DDynamic* K2Node_CustomEvent_Texture, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, class UUMGSequencePlayer** CallFunc_PlayAnimationForward_ReturnValue, bool* CallFunc_IsValid_ReturnValue_4, bool* CallFunc_IsValid_ReturnValue_5, class UUMGSequencePlayer** CallFunc_PlayAnimationReverse_ReturnValue);
};

}


