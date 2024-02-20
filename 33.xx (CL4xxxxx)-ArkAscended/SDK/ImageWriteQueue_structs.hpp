#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDesiredImageFormat : uint8
{
	PNG                            = 0,
	JPG                            = 1,
	BMP                            = 2,
	EXR                            = 3,
	EDesiredImageFormat_MAX        = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x60 - 0x0)
// ScriptStruct ImageWriteQueue.ImageWriteOptions
struct FImageWriteOptions
{
public:
	enum class EDesiredImageFormat               Format;                                            // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	uint8                                        Pad_1BD4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           OnComplete;                                        // 0x4(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CompressionQuality;                                // 0x14(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, DuplicateTransient)
	bool                                         bOverwriteFile;                                    // 0x18(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAsync;                                            // 0x19(0x1)(Edit, ConstParm, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BD7[0x46];                                    // Fixing Size Of Struct > TateDumper <
};

}


