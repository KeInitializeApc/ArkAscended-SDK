#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x5A0 - 0x592)
// WidgetBlueprintGeneratedClass UI_Button_Ark_Global_Purchase.UI_Button_Ark_Global_Purchase_C
class UUI_Button_Ark_Global_Purchase_C : public UUI_Button_Ark_Global_Base_C
{
public:
	uint8                                        Pad_18E3[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x598(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Button_Ark_Global_Purchase_C* GetDefaultObj();

	float Tick(struct FGeometry* MyGeometry);
	bool ExecuteUbergraph_UI_Button_Ark_Global_Purchase(int32* EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


