#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x428 - 0x3F8)
// WidgetBlueprintGeneratedClass DataListEnrtyWidgitCheatFunctionInfo.DataListEnrtyWidgitCheatFunctionInfo_C
class UDataListEnrtyWidgitCheatFunctionInfo_C : public UDataListEntryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F8(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UCheatFunctionInfoEntryButton*         CheatFunctionInfoEntryButton;                      // 0x400(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig)
	struct FLinearColor                          UnSelectedColorBG;                                 // 0x408(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          UnSelectedPairColorBG;                             // 0x418(0x10)(Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListEnrtyWidgitCheatFunctionInfo_C* GetDefaultObj();

	void Construct();
	struct FLinearColor ExecuteUbergraph_DataListEnrtyWidgitCheatFunctionInfo(int32* EntryPoint, int32* CallFunc_GetChildIndex_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


