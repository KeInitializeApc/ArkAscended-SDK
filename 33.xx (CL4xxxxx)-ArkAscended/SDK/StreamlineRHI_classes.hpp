#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class StreamlineRHI.StreamlineOverrideSettings
class UStreamlineOverrideSettings : public UObject
{
public:
	enum class EStreamlineSettingOverride        EnableDLSSFGInPlayInEditorViewportsOverride;       // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class EStreamlineSettingOverride        LoadDebugOverlayOverride;                          // 0x29(0x1)(Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_1101[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UStreamlineOverrideSettings* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class StreamlineRHI.StreamlineSettings
class UStreamlineSettings : public UObject
{
public:
	bool                                         bEnableStreamlineD3D12;                            // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bEnableStreamlineD3D11;                            // 0x29(0x1)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bEnableDLSSFGInPlayInEditorViewports;              // 0x2A(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bLoadDebugOverlay;                                 // 0x2B(0x1)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bAllowOTAUpdate;                                   // 0x2C(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_1109[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        NVIDIANGXApplicationId;                            // 0x30(0x4)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_110A[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UStreamlineSettings* GetDefaultObj();

};

}


