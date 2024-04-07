#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x358 - 0x340)
// WidgetBlueprintGeneratedClass MissionTimeRemainingWidget.MissionTimeRemainingWidget_C
class UMissionTimeRemainingWidget_C : public UMissionTimerWidget
{
public:
	class UProgressBar*                          TimeRemainingProgressBar;                          // 0x340(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            TimeRemainingText;                                 // 0x348(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            TimerLabelText;                                    // 0x350(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMissionTimeRemainingWidget_C* GetDefaultObj();

};

}


