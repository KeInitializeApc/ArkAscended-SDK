#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0xBF8 - 0xB68)
// WidgetBlueprintGeneratedClass HUDActiveMissionDisplayWidget.HUDActiveMissionDisplayWidget_C
class UHUDActiveMissionDisplayWidget_C : public UHUDActiveMissionWidget
{
public:
	class UTextBlock*                            BestTimeNumberText;                                // 0xB68(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UVerticalBox*                          EffectsPanel;                                      // 0xB70(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UVerticalBox*                          InnerMissionContainer;                             // 0xB78(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UVerticalBox*                          MissionAlertEntryContainer;                        // 0xB80(0x8)(ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UBorder*                               MissionAlertFlyoutContainer;                       // 0xB88(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            MissionAlertHeader;                                // 0xB90(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            MissionDescriptionTextBlock;                       // 0xB98(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UBorder*                               MissionDifficultyPanel;                            // 0xBA0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            MissionDifficultyTextBlock;                        // 0xBA8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            MissionNameTextBlock;                              // 0xBB0(0x8)(Edit, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class USizeBox*                              MissionRootContainer;                              // 0xBB8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UVerticalBox*                          MissionStatTrackerContainer;                       // 0xBC0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            MissionTimeValueTextBlock;                         // 0xBC8(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UHUDActiveMissionPhaseRequirementWidget_C* ObjectiveTimePhaseRequirementWidget;               // 0xBD0(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UVerticalBox*                          PhaseRequirementContainer;                         // 0xBD8(0x8)(Edit, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UHUDActiveMissionPhaseRequirementWidget_C* RacePhaseRequirementWidget;                        // 0xBE0(0x8)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UVerticalBox*                          TopMissionAlertEntryContainer;                     // 0xBE8(0x8)(Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            TopMissionAlertTitleTextBlock;                     // 0xBF0(0x8)(BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHUDActiveMissionDisplayWidget_C* GetDefaultObj();

};

}


