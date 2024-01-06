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
	enum class EDLSSSettingOverride              EnableDLSSInEditorViewportsOverride;               // 0x28(0x1)(Edit, ConstParm, ExportObject, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EDLSSSettingOverride              EnableDLSSInPlayInEditorViewportsOverride;         // 0x29(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowDLSSIncompatiblePluginsToolsWarnings;         // 0x2A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EDLSSSettingOverride              ShowDLSSSDebugOnScreenMessages;                    // 0x2B(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12DE[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDLSSOverrideSettings* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class DLSS.DLSSSettings
class UDLSSSettings : public UObject
{
public:
	bool                                         bEnableDLSSD3D12;                                  // 0x28(0x1)(ConstParm, Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableDLSSD3D11;                                  // 0x29(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableDLSSVulkan;                                 // 0x2A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableDLSSInEditorViewports;                      // 0x2B(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	bool                                         bEnableDLSSInPlayInEditorViewports;                // 0x2C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowDLSSSDebugOnScreenMessages;                   // 0x2D(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12DF[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                GenericDLSSBinaryPath;                             // 0x30(0x10)(Net, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bGenericDLSSBinaryExists;                          // 0x40(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12E1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint32                                       NVIDIANGXApplicationId;                            // 0x44(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                CustomDLSSBinaryPath;                              // 0x48(0x10)(ExportObject, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCustomDLSSBinaryExists;                           // 0x58(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAllowOTAUpdate;                                   // 0x59(0x1)(ConstParm, BlueprintReadOnly, Net, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowDLSSIncompatiblePluginsToolsWarnings;         // 0x5A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EDLSSPreset                       DLAAPreset;                                        // 0x5B(0x1)(BlueprintVisible, ExportObject, Net, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12E5[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EDLSSPreset                       DLSSQualityPreset;                                 // 0x5D(0x1)(Edit, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	enum class EDLSSPreset                       DLSSBalancedPreset;                                // 0x5E(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	enum class EDLSSPreset                       DLSSPerformancePreset;                             // 0x5F(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	enum class EDLSSPreset                       DLSSUltraPerformancePreset;                        // 0x60(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12E7[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDLSSSettings* GetDefaultObj();

};

}


