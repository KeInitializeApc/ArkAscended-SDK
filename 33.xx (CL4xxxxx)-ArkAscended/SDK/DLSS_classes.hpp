#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class DLSS.DLSSOverrideSettings
class UDLSSOverrideSettings : public UObject
{
public:
	enum class EDLSSSettingOverride              EnableDLSSInEditorViewportsOverride;               // 0x28(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EDLSSSettingOverride              EnableDLSSInPlayInEditorViewportsOverride;         // 0x29(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowDLSSIncompatiblePluginsToolsWarnings;         // 0x2A(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EDLSSSettingOverride              ShowDLSSSDebugOnScreenMessages;                    // 0x2B(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_68E[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDLSSOverrideSettings* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class DLSS.DLSSSettings
class UDLSSSettings : public UObject
{
public:
	bool                                         bEnableDLSSD3D12;                                  // 0x28(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableDLSSD3D11;                                  // 0x29(0x1)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableDLSSVulkan;                                 // 0x2A(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableDLSSInEditorViewports;                      // 0x2B(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference)
	bool                                         bEnableDLSSInPlayInEditorViewports;                // 0x2C(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowDLSSSDebugOnScreenMessages;                   // 0x2D(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_694[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                GenericDLSSBinaryPath;                             // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bGenericDLSSBinaryExists;                          // 0x40(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_695[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       NVIDIANGXApplicationId;                            // 0x44(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class FString                                CustomDLSSBinaryPath;                              // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCustomDLSSBinaryExists;                           // 0x58(0x1)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAllowOTAUpdate;                                   // 0x59(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowDLSSIncompatiblePluginsToolsWarnings;         // 0x5A(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EDLSSPreset                       DLAAPreset;                                        // 0x5B(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_69D[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	enum class EDLSSPreset                       DLSSQualityPreset;                                 // 0x5D(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference)
	enum class EDLSSPreset                       DLSSBalancedPreset;                                // 0x5E(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference)
	enum class EDLSSPreset                       DLSSPerformancePreset;                             // 0x5F(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference)
	enum class EDLSSPreset                       DLSSUltraPerformancePreset;                        // 0x60(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_6A0[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDLSSSettings* GetDefaultObj();

};

}


