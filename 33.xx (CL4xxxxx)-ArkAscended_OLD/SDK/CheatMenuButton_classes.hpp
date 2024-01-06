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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            ButtonText;                                        // 0x338(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UButton*                               SpawnButton;                                       // 0x340(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	TSoftClassPtr<class APrimalDinoCharacter>    DinoToSpawn;                                       // 0x348(0x30)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UCheatMenu_C*                          AttachedMenu;                                      // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class ADino_Character_BP_C*                  SpawnedDino;                                       // 0x380(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	TSoftClassPtr<class UPrimalItem>             Saddle;                                            // 0x388(0x30)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCheatMenuButton_C* GetDefaultObj();

	class UClass* OnLoaded_376A4AD64ABB8961D41479A9CEBAB5A0();
	class UClass* OnLoaded_E74A95AD4E858FEFB820B09140E2E827();
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	struct FRotator ExecuteUbergraph_CheatMenuButton(int32* EntryPoint, bool* K2Node_ClassDynamicCast_bSuccess, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, class UClass* K2Node_ClassDynamicCast_AsPrimal_Item, bool* K2Node_ClassDynamicCast_bSuccess_1, double* CallFunc_Multiply_DoubleDouble_ReturnValue, bool* Temp_bool_Variable, double* CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool* Temp_bool_Variable_1, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue_2, bool CallFunc_IsChecked_ReturnValue_3, class UClass** K2Node_Select_Default, double* K2Node_Select_Default_1, bool CallFunc_IsChecked_ReturnValue_4, double* CallFunc_Multiply_DoubleDouble_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class AShooterCharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, double* CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double* CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1);
};

}


