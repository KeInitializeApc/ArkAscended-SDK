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
	uint8                                        Pad_3879[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x598(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Button_Ark_Global_Purchase_C* GetDefaultObj();

	float Tick();
	int32 ExecuteUbergraph_UI_Button_Ark_Global_Purchase(const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_Contains_ReturnValue);
};

}


