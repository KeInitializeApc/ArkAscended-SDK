#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x848 - 0x818)
// WidgetBlueprintGeneratedClass MissionBiomeCompletionButton.MissionBiomeCompletionButton_C
class UMissionBiomeCompletionButton_C : public UMissionBiomeCompletionWidget
{
public:
	class UCustomButtonWidget*                   Button;                                            // 0x818(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig)
	class UProgressBar*                          CompletionProgressBar;                             // 0x820(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                IconImage;                                         // 0x828(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UImage*                                Image_22;                                          // 0x830(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional, NoDestructor)
	class UTextBlock*                            NumCompleteLabel;                                  // 0x838(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            NumCompleteValue;                                  // 0x840(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMissionBiomeCompletionButton_C* GetDefaultObj();

};

}


