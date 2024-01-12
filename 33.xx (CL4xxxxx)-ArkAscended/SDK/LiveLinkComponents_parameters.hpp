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

// 0x10 (0x10 - 0x0)
// Function LiveLinkComponents.LiveLinkComponentController.SetSubjectRepresentation
struct ULiveLinkComponentController_SetSubjectRepresentation_Params
{
public:
	struct FLiveLinkSubjectRepresentation        InSubjectRepresentation;                           // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function LiveLinkComponents.LiveLinkComponentController.GetSubjectRepresentation
struct ULiveLinkComponentController_GetSubjectRepresentation_Params
{
public:
	struct FLiveLinkSubjectRepresentation        ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


