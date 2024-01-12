#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0xAD0 - 0xA40)
// WidgetBlueprintGeneratedClass DataListButton_ListSession.DataListButton_ListSession_C
class UDataListButton_ListSession_C : public UDataListEntryButton_ListSession
{
public:
	class UTextBlock*                            BuildLabel;                                        // 0xA40(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            BuildLabel_1;                                      // 0xA48(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UCustomButtonWidget*                   Button;                                            // 0xA50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, GlobalConfig)
	class UTextBlock*                            DayLabel;                                          // 0xA58(0x8)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            GameModeLabel;                                     // 0xA60(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_129;                                         // 0xA68(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, ContainsInstancedReference)
	class UImage*                                Image_137;                                         // 0xA70(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, EditorOnly, ContainsInstancedReference)
	class UImage*                                Image_1457;                                        // 0xA78(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, NoDestructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay)
	class UTextBlock*                            MapNameLabel;                                      // 0xA80(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            PingLabel;                                         // 0xA88(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            PlayerNumLabel;                                    // 0xA90(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            SessionNameLabel;                                  // 0xA98(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          SelectedColorBG;                                   // 0xAA0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          UnSelectedColorBG;                                 // 0xAB0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          UnSelectedPairColorBG;                             // 0xAC0(0x10)(ConstParm, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListButton_ListSession_C* GetDefaultObj();

	bool OnPaint(class UPanelWidget** CallFunc_GetParent_ReturnValue, int32* CallFunc_GetChildIndex_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, struct FLinearColor* CallFunc_SelectColor_ReturnValue);
};

}


