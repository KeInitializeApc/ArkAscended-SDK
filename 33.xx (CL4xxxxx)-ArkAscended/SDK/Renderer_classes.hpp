#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x6C0 - 0x698)
// Class Renderer.SparseVolumeTextureViewerComponent
class USparseVolumeTextureViewerComponent : public UPrimitiveComponent
{
public:
	class USparseVolumeTexture*                  SparseVolumeTexturePreview;                        // 0x698(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bAnimate : 1;                                      // Mask: 0x1, PropSize: 0x10x6A0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_131 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1D6F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        AnimationFrame;                                    // 0x6A4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        FrameRate;                                         // 0x6A8(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm)
	float                                        AnimationTime;                                     // 0x6AC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ComponentToVisualize;                              // 0x6B0(0x4)(BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D71[0xC];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USparseVolumeTextureViewerComponent* GetDefaultObj();

};

// 0x8 (0x4D0 - 0x4C8)
// Class Renderer.SparseVolumeTextureViewer
class ASparseVolumeTextureViewer : public AInfo
{
public:
	class USparseVolumeTextureViewerComponent*   SparseVolumeTextureViewerComponent;                // 0x4C8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class ASparseVolumeTextureViewer* GetDefaultObj();

};

}


