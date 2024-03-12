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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	TSoftClassPtr<class APrimalDinoCharacter>    DinoToSpawn;                                       // 0x348(0x30)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class ADino_Character_BP_C*                  SpawnedDino;                                       // 0x380(0x8)(Edit, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	TSoftClassPtr<class UPrimalItem>             Saddle;                                            // 0x388(0x30)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UCheatMenuButton_C* GetDefaultObj();

	void OnLoaded_376A4AD64ABB8961D41479A9CEBAB5A0(class UClass* Loaded);
	void OnLoaded_E74A95AD4E858FEFB820B09140E2E827(class UClass* Loaded);
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	struct FVector ExecuteUbergraph_CheatMenuButton(int32* EntryPoint, class UClass* K2Node_CustomEvent_Loaded_1, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsPrimal_Dino_Character, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, class UClass* K2Node_CustomEvent_Loaded, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, class UClass* Temp_class_Variable_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, float* CallFunc_GetScaledCapsuleRadius_ReturnValue, bool Temp_bool_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool Temp_bool_Variable_1, class UClass* Temp_class_Variable_2, bool* CallFunc_BooleanXOR_ReturnValue, class UClass* K2Node_Select_Default, double K2Node_Select_Default_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess_1, struct FVector* CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1);
};

}


