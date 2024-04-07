#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xAA (0x802 - 0x758)
// WidgetBlueprintGeneratedClass HUDNotificationEntry.HUDNotificationEntry_C
class UHUDNotificationEntry_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0x760(0x8)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      FadeIn;                                            // 0x768(0x8)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	class UBorder*                               Border_0;                                          // 0x770(0x8)(ConstParm, ExportObject, ReturnParm, Config, GlobalConfig, RepNotify)
	class UImage*                                ButtonGamepad;                                     // 0x778(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UBorder*                               ButtonKeyboard;                                    // 0x780(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UHUDNotificationEntrySmall_C*          HUDNotificationEntrySmall;                         // 0x788(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	class UImage*                                LeftBracket;                                       // 0x790(0x8)(BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class UImage*                                LeftBracket_1;                                     // 0x798(0x8)(BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, Interp)
	class UTextBlock*                            Text_NotifText;                                    // 0x7A0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            TextKeyboardButton;                                // 0x7A8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FHUDNotificationEntry_Struct          HUDNotificationEntry;                              // 0x7B0(0x4C)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig)
	uint8                                        Pad_47E3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         IsDestroying;                                      // 0x800(0x1)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         FirstInit;                                         // 0x801(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHUDNotificationEntry_C* GetDefaultObj();

	bool SetupButtonExtendedHUD(class UTexture2D* Icon, class FText Keybinding);
	class UPrimalUI* DestroyWidget(bool* CallFunc_EqualEqual_IntInt_ReturnValue, class UObject** CallFunc_GetOuterObject_ReturnValue, class UObject** CallFunc_GetOuterObject_ReturnValue_1, bool* K2Node_DynamicCast_bSuccess);
	class FString InitWidget(bool PreventAnim, bool ShowButtonForInfo, class UTexture2D* ButtonTex, class FText KBM_ButtonName, const class FString& CallFunc_Replace_ReturnValue);
	bool InitFadeAnim(bool PreventAnim, bool CallFunc_IsSOTF_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void ResizeEntry();
	struct FSlateColor GetNotifStringColor();
	float Tick(struct FGeometry* MyGeometry);
	void ExecuteUbergraph_HUDNotificationEntry(int32* EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


