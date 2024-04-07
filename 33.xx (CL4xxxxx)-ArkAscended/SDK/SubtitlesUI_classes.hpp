#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF4 (0x8DC - 0x7E8)
// WidgetBlueprintGeneratedClass SubtitlesUI.SubtitlesUI_C
class USubtitlesUI_C : public UUI_Subtitles
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7E8(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      Icon_Glide_Out_Skip;                               // 0x7F0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      Icon_Glide_In_Skip;                                // 0x7F8(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      HLNA_Icon_Glide_Out;                               // 0x800(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      HLNA_Icon_Glide_In;                                // 0x808(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x810(0x8)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      FadeOut;                                           // 0x818(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	class UImage*                                DialogueIconImage;                                 // 0x820(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPrimalRichTextBlock*                  DialogueRichText;                                  // 0x828(0x8)(Edit, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            SubtitleTextBlock;                                 // 0x830(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class FString>                        ExtAscensionSubtitles;                             // 0x838(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FSlateColor>                   ExSubtitleColors;                                  // 0x848(0x10)(Edit, ConstParm, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class FString>                        Gen2IntroSubtitles;                                // 0x858(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FSlateColor>                   Gen2IntroSubtitleColors;                           // 0x868(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class FString>                        Gen2EndingSubtitles;                               // 0x878(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FSlateColor>                   Gen2EndingSubtitleColors;                          // 0x888(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class FString>                        Gen2StingerSubtitles;                              // 0x898(0x10)(ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FSlateColor>                   Gen2StingerSubtitleColors;                         // 0x8A8(0x10)(ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        CurrentIndex;                                      // 0x8B8(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  CurrentSubtitleSet;                                // 0x8BC(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         WasChatBoxShown;                                   // 0x8C4(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         Is_Fading_Out;                                     // 0x8C5(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F9F[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateColor                           DefaultSubtitleColor;                              // 0x8C8(0x14)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USubtitlesUI_C* GetDefaultObj();

	bool GetSubtitleColors(const TArray<struct FSlateColor>& Colors, const TArray<struct FSlateColor>& OutColors);
	void ProcessDynamicMaterialForDialogueIcon(class UPrimalItem* SkinItem);
	class UUMGSequencePlayer* OnShowSubtitles(bool ToggleChatBox, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsChatBoxVisible_ReturnValue);
	bool GetSubtitles(const TArray<class FString>& OutSubtitleSet);
	int32 ShowSubtitleAtIndex();
	void FadeOutSubtitles();
	void AddedToViewport();
	void ShowNextSubtitle();
	void ResetToStart(class FName SubtitleSet);
	void OnHideSubtitles();
	bool ExecuteUbergraph_SubtitlesUI(int32* EntryPoint, int32* K2Node_CustomEvent_Index, class FName* K2Node_CustomEvent_SubtitleSet, const TArray<class FString>& CallFunc_GetSubtitles_Subtitles, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_SimpleReplaceUnicodeWithSupportedAlternatives_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const TArray<struct FSlateColor>& CallFunc_GetSubtitleColors_Colors, const struct FSlateColor& CallFunc_Array_Get_Item_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue_1, bool Temp_bool_Variable, const struct FSlateColor& K2Node_Select_Default);
};

}


