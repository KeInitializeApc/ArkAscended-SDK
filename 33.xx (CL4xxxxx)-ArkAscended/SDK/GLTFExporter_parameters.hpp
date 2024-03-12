#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0xA8 - 0x0)
// Function GLTFExporter.GLTFExporter.ExportToGLTF
struct UGLTFExporter_ExportToGLTF_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class FString                                FilePath;                                          // 0x8(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, EditConst, SubobjectReference)
	class UGLTFExportOptions*                    Options;                                           // 0x18(0x8)(Edit, ExportObject, Parm, ZeroConstructor, GlobalConfig, SubobjectReference)
	TSet<class AActor*>                          SelectedActors;                                    // 0x20(0x50)(Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGLTFExportMessages                   OutMessages;                                       // 0x70(0x30)(ConstParm, BlueprintVisible, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xA0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1949[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

}
}


