#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x290 (0x9F8 - 0x768)
// WidgetBlueprintGeneratedClass BinocularsUI.BinocularsUI_C
class UBinocularsUI_C : public UBinocularsWidgetUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x768(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      NewTrack;                                          // 0x770(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0x778(0x8)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      NewTarget;                                         // 0x780(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UWidgetSwitcher*                       _VerticalBox_;                                     // 0x788(0x8)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	class UCanvasPanel*                          BinocularsZoomInfo;                                // 0x790(0x8)(Edit, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UBorder*                               CharBorderTarget;                                  // 0x798(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            ColorID0;                                          // 0x7A0(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            ColorID1;                                          // 0x7A8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            ColorID2;                                          // 0x7B0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            ColorID3;                                          // 0x7B8(0x8)(EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            ColorID4;                                          // 0x7C0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            ColorID5;                                          // 0x7C8(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USizeBox*                              ColorizationSizeBox;                               // 0x7D0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UBorder*                               ColorSwatch_Region0;                               // 0x7D8(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UBorder*                               ColorSwatch_Region1;                               // 0x7E0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UBorder*                               ColorSwatch_Region2;                               // 0x7E8(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UBorder*                               ColorSwatch_Region3;                               // 0x7F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UBorder*                               ColorSwatch_Region4;                               // 0x7F8(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UBorder*                               ColorSwatch_Region5;                               // 0x800(0x8)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                DinoIcon;                                          // 0x808(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                DinoIcon_1;                                        // 0x810(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	class UTextBlock*                            DinoState;                                         // 0x818(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            DinoState_1;                                       // 0x820(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UTextBlock*                            DinoState_4;                                       // 0x828(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	class UTextBlock*                            DistanceLabelText;                                 // 0x830(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            DistanceLabelText_1;                               // 0x838(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
	class USlider*                               DistanceSlider;                                    // 0x840(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                EffectivenessIcon;                                 // 0x848(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USizeBox*                              EffectivnesBox;                                    // 0x850(0x8)(BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UProgressBar*                          FoodBar;                                           // 0x858(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class UImage*                                GenderIcon;                                        // 0x860(0x8)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                GenderIcon_1;                                      // 0x868(0x8)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
	class UImage*                                GenderIcon_2;                                      // 0x870(0x8)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
	class UProgressBar*                          HealthBar;                                         // 0x878(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class UProgressBar*                          HealthBar_Structure;                               // 0x880(0x8)(OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UBorder*                               HealthStructureBox;                                // 0x888(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UVerticalBox*                          IconStructureBox;                                  // 0x890(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                Image_16;                                          // 0x898(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, NoDestructor)
	class UOverlay*                              LockedInfo;                                        // 0x8A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UOverlay*                              MadurationOverlay;                                 // 0x8A8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UProgressBar*                          MadurationPercent;                                 // 0x8B0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UCanvasPanel*                          MainCanvas;                                        // 0x8B8(0x8)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
	class UVerticalBox*                          MutationsBox;                                      // 0x8C0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            MutationsFemale;                                   // 0x8C8(0x8)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            MutationsMale;                                     // 0x8D0(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                NeuteredIcon;                                      // 0x8D8(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            NeuteredLabel;                                     // 0x8E0(0x8)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UProgressBar*                          OxigenBar;                                         // 0x8E8(0x8)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UScaleBox*                             ScaleBox_2840;                                     // 0x8F0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, RepNotify, EditorOnly, NoDestructor, AssetRegistrySearchable, SimpleDisplay, Protected)
	class UScaleBox*                             ScaleBox_2867;                                     // 0x8F8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, NonTransactional, NoDestructor, AssetRegistrySearchable, SimpleDisplay, Protected)
	class USizeBox*                              SpayedBox;                                         // 0x900(0x8)(BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UProgressBar*                          StaminaBar;                                        // 0x908(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class UTextBlock*                            StatFoodLabel;                                     // 0x910(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            StatHealthLabel;                                   // 0x918(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            StatMeleeLabel;                                    // 0x920(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            StatOxygenLabel;                                   // 0x928(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            StatSpeedLabel;                                    // 0x930(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            StatStaminaLabel;                                  // 0x938(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            StatTorporLabel;                                   // 0x940(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            StatWeightLabel;                                   // 0x948(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            StructureHealthLabel;                              // 0x950(0x8)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            TamedEffectivenessLabel;                           // 0x958(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            TargetName;                                        // 0x960(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UProgressBar*                          TorpidBar;                                         // 0x968(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            TribeName;                                         // 0x970(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	class UProgressBar*                          WeightBar;                                         // 0x978(0x8)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, SubobjectReference)
	class UWidgetSwitcher*                       WidgetSwitcher_1;                                  // 0x980(0x8)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, Interp)
	TArray<enum class EPrimalCharacterStatusValue> DinoStatsToDraw;                                   // 0x988(0x10)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class AActor*                                LastTargeted;                                      // 0x998(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       LastTImeUpdated;                                   // 0x9A0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                WildString;                                        // 0x9A8(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                TamedString;                                       // 0x9B8(0x10)(ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSoftClassPtr<class APrimalBuff>             AlphaBuff;                                         // 0x9C8(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBinocularsUI_C* GetDefaultObj();

	class FText SetupStructureData(class APrimalStructure** Structure, class APlayerController** ForPC, class FText* CallFunc_Conv_DoubleToText_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText* CallFunc_Conv_DoubleToText_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class UPrimalItem** K2Node_DynamicCast_AsPrimal_Item, bool* K2Node_DynamicCast_bSuccess, double CallFunc_Conv_DoubleToText_Value_ImplicitCast, double CallFunc_Divide_DoubleFloat_A_ImplicitCast, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_1, float CallFunc_SetPercent_InPercent_ImplicitCast);
	class UProgressBar* GetStatusBar(enum class EPrimalCharacterStatusValue* ValueType, class UProgressBar* LocalTextLable, bool K2Node_SwitchEnum_CmpSuccess);
	void SetupGender(bool IsFemale);
	class UTextBlock* GetStatusText(enum class EPrimalCharacterStatusValue* ValueType, class UTextBlock* LocalTextLable, bool K2Node_SwitchEnum_CmpSuccess);
	float SetupCharData(class APrimalCharacter** Char, class APlayerController** ForPC, class UClass** EntryClassLocal, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const class FString& Temp_string_Variable, enum class EPrimalCharacterStatusValue Temp_byte_Variable, class UClass* K2Node_ClassDynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, enum class EPrimalCharacterStatusValue Temp_byte_Variable_1, class FText* CallFunc_Conv_DoubleToText_ReturnValue, class FText* CallFunc_Conv_DoubleToText_ReturnValue_1, float* CallFunc_GetCharHealthMaxStatus_ReturnValue, class FText* CallFunc_Conv_DoubleToText_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText* CallFunc_Conv_DoubleToText_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, TArray<class UBorder*>* K2Node_MakeArray_Array, TArray<class UTextBlock*>* K2Node_MakeArray_Array_1, const class FString& CallFunc_GetColorSetInidcesAsString_ReturnValue, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue, int32* Temp_int_Variable, class UBorder* CallFunc_Array_Get_Item, class UTextBlock* CallFunc_Array_Get_Item_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, struct FLinearColor* K2Node_MakeStruct_LinearColor, bool CallFunc_LessEqual_IntInt_ReturnValue, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsPrimal_Dino_Character_1, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsShooterCharacter_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_2, enum class EPrimalCharacterStatusValue CallFunc_Array_Get_Item_2, bool* CallFunc_GetCharUsesStat_ReturnValue, const class FString& K2Node_Select_Default, float K2Node_Select_Default_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, int32 CallFunc_Len_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, double CallFunc_Conv_DoubleToText_Value_ImplicitCast, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_1, double CallFunc_Divide_DoubleFloat_A_ImplicitCast, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_2, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_3, double CallFunc_Divide_DoubleFloat_A_ImplicitCast_1, float* K2Node_Select_Health_ImplicitCast);
	bool UpdateTarget(class AActor** Actor);
	void Construct();
	double UpdateZoomOptions();
	void SetVisibilityBinocularsOptions(bool Visible);
	void NewTrackTarget();
	float Tick(struct FGeometry* MyGeometry);
	double ExecuteUbergraph_BinocularsUI(int32* EntryPoint, double* K2Node_CustomEvent_Zoom, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, struct FRotator* CallFunc_GetPlayerViewPoint_Rotation, double CallFunc_Vector_Distance_ReturnValue, bool* K2Node_CustomEvent_IsLocked, class FText* CallFunc_Conv_DoubleToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_1, bool* K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsTimeSince_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_2, bool* K2Node_DynamicCast_bSuccess_4, float CallFunc_SetValue_InValue_ImplicitCast);
};

}

