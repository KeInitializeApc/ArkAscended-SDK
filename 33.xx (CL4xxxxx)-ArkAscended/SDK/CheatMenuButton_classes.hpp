#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x3B8 - 0x330)
// WidgetBlueprintGeneratedClass CheatMenuButton.CheatMenuButton_C
class UCheatMenuButton_C : public UUI_DebugSpawnMenuEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	TSoftClassPtr<class APrimalDinoCharacter>    DinoToSpawn;                                       // 0x348(0x30)(Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x378(0x8)(EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class ADino_Character_BP_C*                  SpawnedDino;                                       // 0x380(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	TSoftClassPtr<class UPrimalItem>             Saddle;                                            // 0x388(0x30)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UCheatMenuButton_C* GetDefaultObj();

	void OnLoaded_376A4AD64ABB8961D41479A9CEBAB5A0(class UClass* Loaded);
	void OnLoaded_E74A95AD4E858FEFB820B09140E2E827(class UClass* Loaded);
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	struct FVector ExecuteUbergraph_CheatMenuButton(class UClass** K2Node_CustomEvent_Loaded_1, class UClass** Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsPrimal_Dino_Character, bool K2Node_ClassDynamicCast_bSuccess, class UClass** K2Node_CustomEvent_Loaded, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, class UClass** Temp_class_Variable_1, class UClass* K2Node_ClassDynamicCast_AsPrimal_Item, bool K2Node_ClassDynamicCast_bSuccess_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetScaledCapsuleRadius_ReturnValue, bool* Temp_bool_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double Temp_real_Variable, bool* Temp_bool_Variable_1, class UClass** Temp_class_Variable_2, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, bool CallFunc_BooleanXOR_ReturnValue, bool CallFunc_IsChecked_ReturnValue_2, bool CallFunc_IsChecked_ReturnValue_3, class UClass** K2Node_Select_Default, double* K2Node_Select_Default_1, bool CallFunc_IsChecked_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, class FText CallFunc_GetText_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, class AShooterCharacter* CallFunc_GetPlayerCharacter_ReturnValue, struct FVector* CallFunc_GetActorForwardVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1);
};

}


