#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7F0 (0xF30 - 0x740)
// BlueprintGeneratedClass CustomButton_HUB_ASA.CustomButton_HUB_ASA_C
class UCustomButton_HUB_ASA_C : public UCustomButtonWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x740(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_61A[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          SelectedStyle;                                     // 0x750(0x3F0)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, SubobjectReference)
	struct FButtonStyle                          UnSelectedStyle;                                   // 0xB40(0x3F0)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UCustomButton_HUB_ASA_C* GetDefaultObj();

	void BPSetToggledState(bool* IsToggled);
	int32 ExecuteUbergraph_CustomButton_HUB_ASA(bool* K2Node_Event_IsToggled);
};

}


