#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0xFA0 - 0xED0)
// BlueprintGeneratedClass PrimalItem_StartingNote.PrimalItem_StartingNote_C
class UPrimalItem_StartingNote_C : public UPrimalItem_Note_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xED0(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UTexture2D*>                    AscensionIcons;                                    // 0xED8(0x10)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                LocalCustomItemDesc;                               // 0xEE8(0x10)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TArray<class FString>                        DifficultyStrings;                                 // 0xEF8(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TArray<class FString>                        BossStrings;                                       // 0xF08(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TArray<struct FArrayOfStrings>               BossPostStrings;                                   // 0xF18(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UTexture2D*                            LocalItemIcon;                                     // 0xF28(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TArray<class UTexture2D*>                    LocalAscensionIcons;                               // 0xF30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TArray<class UTexture2D*>                    SecondaryAscensionIcons;                           // 0xF40(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UTexture2D*                            SecondaryIcon;                                     // 0xF50(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<class UTexture2D*>                    TertiaryAscensionIcons;                            // 0xF58(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UTexture2D*                            TertiaryIcon;                                      // 0xF68(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TArray<class UTexture2D*>                    QuaternaryAscensionIcons;                          // 0xF70(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UTexture2D*                            QuaternaryIcon;                                    // 0xF80(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         bResetHighlightTime;                               // 0xF88(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_33F9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       HighlightStartTime;                                // 0xF90(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       HighlightTimeToEnableRespawn;                      // 0xF98(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItem_StartingNote_C* GetDefaultObj();

	bool BPCanUse(bool bIgnoreCooldown, bool ReturnValue, bool* CallFunc_BPCanUse_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_BPCanImplantSuicide_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast);
	bool BPDrawItemIcon(struct FVector2D* ItemCanvasScale, bool* bItemEnabled, struct FLinearColor* TheTintColor, bool* Temp_bool_Variable, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, double* CallFunc_BreakVector2D_X_1, double* CallFunc_BreakVector2D_Y_1, double* CallFunc_BreakVector2D_X_2, double* CallFunc_BreakVector2D_Y_2, double* CallFunc_BreakVector2D_X_3, double* CallFunc_BreakVector2D_Y_3, double* CallFunc_BreakVector2D_X_4, double* CallFunc_BreakVector2D_Y_4, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, class UTexture2D** K2Node_Select_Default);
	bool BPGetItemIcon(class UTexture2D* ReturnValue, bool* Temp_bool_Variable, class UTexture2D** K2Node_Select_Default);
	bool IsLocalImplant(bool* bRetVal, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
	class FString BPGetItemName(const class FString& ItemNameIn, const class FString& ReturnValue, bool* Temp_bool_Variable, class FString* K2Node_Select_Default);
	int32 Get_Survival_Quotient_String(int32 CallFunc_FFloor_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	double BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, const class FString& ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_BPCanImplantSuicide_ReturnValue, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, double* CallFunc_Subtract_DoubleFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class FString* CallFunc_BPFormatAsTime_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, double* CallFunc_Subtract_DoubleFloat_ReturnValue_1, class FText* CallFunc_Format_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_Conv_DoubleToString_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FText* CallFunc_Format_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_1, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, class FText* CallFunc_Conv_IntToText_ReturnValue, class FText* CallFunc_Conv_IntToText_ReturnValue_1, class FText* CallFunc_Format_ReturnValue_2, class FText* CallFunc_Format_ReturnValue_3, class FString* CallFunc_Conv_TextToString_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_3, double* CallFunc_Add_DoubleFloat_A_ImplicitCast, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast);
	double BPPreInitializeItem(class UWorld* OptionalInitWorld, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* Temp_bool_Variable, bool* Temp_bool_Variable_1, class FString* K2Node_Select_Default, bool* CallFunc_IsValid_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_EqualEqual_ClassClass_ReturnValue, bool* CallFunc_IsValid_ReturnValue_4, class UObject** K2Node_Select_Default_1, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, int32 CallFunc_FFloor_ReturnValue_1, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, class FString* K2Node_Select_Default_2, class FString* CallFunc_SelectString_ReturnValue, int32 CallFunc_FFloor_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue_3, class FString* K2Node_Select_Default_3, int32* CallFunc_SelectInt_ReturnValue, class FString* K2Node_Select_Default_4, class FText* K2Node_Select_Default_5, class FString* CallFunc_Get_Survival_Quotient_String_OutString, class FText* CallFunc_Conv_StringToText_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue_2, class FText* CallFunc_Conv_StringToText_ReturnValue_3, class FText* CallFunc_Format_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, double CallFunc_FFloor_A_ImplicitCast, double CallFunc_FFloor_A_ImplicitCast_1, double CallFunc_FFloor_A_ImplicitCast_2, double CallFunc_FFloor_A_ImplicitCast_3);
	void BlueprintUsed();
	void BPOnUpdatedItemContextMenu();
	double ExecuteUbergraph_PrimalItem_StartingNote(bool* CallFunc_CanUse_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
};

}


