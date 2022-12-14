# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from planner_msgs/planning_scene_infoRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class planning_scene_infoRequest(genpy.Message):
  _md5sum = "bc137ffdcb050951f620d0d4a6e80962"
  _type = "planner_msgs/planning_scene_infoRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """float64[] env_size_x
float64[] env_size_y
bool show_environment_borders

"""
  __slots__ = ['env_size_x','env_size_y','show_environment_borders']
  _slot_types = ['float64[]','float64[]','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       env_size_x,env_size_y,show_environment_borders

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(planning_scene_infoRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.env_size_x is None:
        self.env_size_x = []
      if self.env_size_y is None:
        self.env_size_y = []
      if self.show_environment_borders is None:
        self.show_environment_borders = False
    else:
      self.env_size_x = []
      self.env_size_y = []
      self.show_environment_borders = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.env_size_x)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.env_size_x))
      length = len(self.env_size_y)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.env_size_y))
      _x = self.show_environment_borders
      buff.write(_get_struct_B().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.env_size_x = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.env_size_y = s.unpack(str[start:end])
      start = end
      end += 1
      (self.show_environment_borders,) = _get_struct_B().unpack(str[start:end])
      self.show_environment_borders = bool(self.show_environment_borders)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.env_size_x)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.env_size_x.tostring())
      length = len(self.env_size_y)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.env_size_y.tostring())
      _x = self.show_environment_borders
      buff.write(_get_struct_B().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.env_size_x = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.env_size_y = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 1
      (self.show_environment_borders,) = _get_struct_B().unpack(str[start:end])
      self.show_environment_borders = bool(self.show_environment_borders)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from planner_msgs/planning_scene_infoResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class planning_scene_infoResponse(genpy.Message):
  _md5sum = "6f6da3883749771fac40d6deb24a8c02"
  _type = "planner_msgs/planning_scene_infoResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """
bool ok
"""
  __slots__ = ['ok']
  _slot_types = ['bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       ok

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(planning_scene_infoResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.ok is None:
        self.ok = False
    else:
      self.ok = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.ok
      buff.write(_get_struct_B().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 1
      (self.ok,) = _get_struct_B().unpack(str[start:end])
      self.ok = bool(self.ok)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.ok
      buff.write(_get_struct_B().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 1
      (self.ok,) = _get_struct_B().unpack(str[start:end])
      self.ok = bool(self.ok)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
class planning_scene_info(object):
  _type          = 'planner_msgs/planning_scene_info'
  _md5sum = '0f90a5fd7094d6c5f8a02858a00e3072'
  _request_class  = planning_scene_infoRequest
  _response_class = planning_scene_infoResponse
