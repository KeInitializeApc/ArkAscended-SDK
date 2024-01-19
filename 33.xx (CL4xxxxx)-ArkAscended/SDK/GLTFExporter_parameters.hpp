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
	class FString                                FilePath;                                          // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, EditConst, SubobjectReference)
	class UGLTFExportOptions*                    Options;                                           // 0x18(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TSet<class AActor*>                          SelectedActors;                                    // 0x20(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FGLTFExportMessages                   OutMessages;                                       // 0x70(0x30)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xA0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_201F[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

}
}


